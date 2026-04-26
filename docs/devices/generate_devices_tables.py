import json
import logging
import os
import re
import shutil

import pandas as pd
import pytablereader as ptr
import requests

logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

file_init = "rows.md"
file_app = "_app_devices.md"
http_file_app = "https://github.com/theengs/app/raw/development/docs/prerequisites/devices.md"

data_dir = "../.vitepress/data"
public_img_dir = "../.vitepress/public/img"
img_source_dir = "../img"

logger.info('Loading template file: %s', file_init)
loader_init = ptr.MarkdownTableFileLoader(file_init)
for table_data_init in loader_init.load():
    table_merge = pd.DataFrame(table_data_init.as_dataframe())

logger.info('Loading device files')
for filename in os.listdir():
    f = os.path.join(filename)
    if os.path.isfile(f) and f != file_init:
        with open(f, 'r') as file:
            text = file.read()
            pattern = r'\!\[.*?\]\((.*?)\)'
            match = re.search(pattern, text)
            image_link = match.group(1) if match else None
        loader = ptr.MarkdownTableFileLoader(f)
        try:
            for table_data in loader.load():
                table = pd.DataFrame(table_data.as_dataframe())
                table.loc[len(table.index)] = ['Filename', f]
                if 'Image' in table.iloc[:, 0].values:
                    image_row_index = table[table.iloc[:, 0] == 'Image'].index[0]
                    table.iloc[image_row_index, 1] = image_link
                table_merge = table_merge.merge(table, how='left')
        except Exception:
            logger.exception('Error with file: %s', f)

logger.info('Loading app compatible devices file: %s', http_file_app)
r = requests.get(http_file_app)
with open(file_app, 'wb') as f:
    f.write(r.content)
loader_app = ptr.MarkdownTableFileLoader(file_app)
for table_data_app in loader_app.load():
    table_app = pd.DataFrame(table_data_app.as_dataframe())

logger.info('Transposing table and adapting indexes')
table_merge = table_merge.set_index('Model Id').transpose()
table_merge = table_merge.reset_index()
table_merge = table_merge.rename(columns={'index': 'Model_Id'})

logger.info('Sorting table')
table_merge.sort_values(by=['Model_Id'], inplace=True,
                        key=lambda col: col.str.lower())

logger.info('Adding app compatible devices to the table')
table_merge = table_merge.merge(table_app, how='left', left_on='Model_Id', right_on='Model_Id')

logger.info('Copying device images to public/img/')
os.makedirs(public_img_dir, exist_ok=True)


def field(row, key):
    if key not in row:
        return ''
    value = row[key]
    return '' if pd.isna(value) else value


records = []
for _, row in table_merge.iterrows():
    image_path = None
    raw_image = field(row, 'Image')
    if raw_image:
        img_filename = os.path.basename(raw_image)
        source = os.path.join(img_source_dir, img_filename)
        if os.path.isfile(source):
            shutil.copyfile(source, os.path.join(public_img_dir, img_filename))
            image_path = f"/img/{img_filename}"
        else:
            logger.warning('Image file not found: %s', source)

    filename_field = field(row, 'Filename')
    page_slug = filename_field.replace('.md', '') if filename_field else ''

    record = {
        'model_id': field(row, 'Model_Id'),
        'page': page_slug,
        'image': image_path,
        'brand': field(row, 'Brand'),
        'model': field(row, 'Model'),
        'short_description': field(row, 'Short Description'),
        'exchanged_data': field(row, 'Exchanged Data'),
        'device_tracker': field(row, 'Device Tracker'),
    }

    for col in table_app.columns:
        if col == 'Model_Id':
            continue
        record[col.lower().replace(' ', '_')] = field(row, col)

    records.append(record)

logger.info('Writing %d devices to JSON', len(records))
os.makedirs(data_dir, exist_ok=True)
with open(os.path.join(data_dir, 'devices.json'), 'w', encoding='utf-8') as f:
    json.dump(records, f, indent=2, ensure_ascii=False)

logger.info('Done')
