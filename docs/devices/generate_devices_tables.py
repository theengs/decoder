import pytablereader as ptr
import pandas as pd
import os
import logging
import requests

# Set up logging
logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

file_init = "rows.md"
file_app = "devices.md"
http_file_app = "https://github.com/theengs/app/raw/development/docs/prerequisites/devices.md"

logger.info('Loading template file: %s', file_init)
loader_init = ptr.MarkdownTableFileLoader(file_init)
for table_data_init in loader_init.load():
    table_merge = pd.DataFrame(table_data_init.as_dataframe())

logger.info('Loading device files')
for filename in os.listdir():
    f = os.path.join(filename)
    if os.path.isfile(f) and f != file_init:
        loader = ptr.MarkdownTableFileLoader(f)
        try:
            for table_data in loader.load():
                table = pd.DataFrame(table_data.as_dataframe())
                table.loc[len(table.index)] = ['Filename',f]
                table_merge = table_merge.merge(table, how='left')
        except:
            logger.exception('Error with file: %s', f)

logger.info('Loading app compatible devices file: %s', http_file_app)
r = requests.get(http_file_app)
with open(file_app,'wb') as f:
    f.write(r.content)

loader_app = ptr.MarkdownTableFileLoader(file_app)
for table_data_app in loader_app.load():
    table_app = pd.DataFrame(table_data_app.as_dataframe())

logger.info('Transposing table and adapting indexes')
table_merge = table_merge.set_index('Model Id').transpose()
table_merge = table_merge.reset_index()
table_merge = table_merge.rename(columns={'index':'Model_Id'})

logger.info('sorting table')
table_merge.sort_values(by=['Model_Id'], inplace=True, key=lambda col: col.str.lower())

logger.info('Adding app compatible devices to the table')
table_merge = table_merge.merge(table_app, how='left',left_on='Model_Id', right_on='Model_Id')

logger.info('Adding links to the file from the model Id')
for ind in table_merge.index:
    table_merge['Model_Id'][ind] = "<a href=\"" + table_merge['Filename'][ind].replace('.md','.html') + "\">" + table_merge['Model_Id'][ind] + "</a>"

logger.info('Dropping unnecessary columns')
table_merge.drop(columns=['Communication','Frequency','Encrypted','Filename','Power source'], inplace=True)

logger.info('Converting table to HTML')
html_table = table_merge.to_html(table_id='devices', escape=False, border=0)

logger.info('Reading template file')
with open('devices_template.html', 'r') as f:
    template = f.read()

logger.info('Replacing placeholders in template')
output_html = template.replace('{table_content_to_replace}', html_table)
output_html = output_html.replace('Model Id', 'Id')
output_html = output_html.replace('NaN', '')

logger.info('Writing output to file')
output_dir = '../.vuepress/dist/devices/'
os.makedirs(output_dir, exist_ok=True)
with open(os.path.join(output_dir, 'devices.html'), 'w', encoding='utf-8') as f:
    f.write(output_html)

logger.info('Done')
