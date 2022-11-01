import pytablereader as ptr
import pandas as pd
import os

file_init = "rows.md"

# Loading of the template file with the list of attributes
loader_init = ptr.MarkdownTableFileLoader(file_init)
for table_data_init in loader_init.load():
    table_merge = pd.DataFrame(table_data_init.as_dataframe())

# Loading of the device files into a table
for filename in os.listdir():
    f = os.path.join(filename)
    if os.path.isfile(f) and f != file_init:
      loader = ptr.MarkdownTableFileLoader(f)
      for table_data in loader.load():
         table = pd.DataFrame(table_data.as_dataframe())
         table.loc[len(table.index)] = ['Filename',f]
         table_merge = table_merge.merge(table, how='left')

# Transpose the table and adapt indexes
table_merge = table_merge.set_index('Model Id').transpose()
table_merge = table_merge.reset_index()
table_merge = table_merge.rename(columns={'index':'Model_Id'})

# Add link to the file from the model Id
for ind in table_merge.index:
    table_merge['Model_Id'][ind] = "[" + table_merge['Model_Id'][ind] + "](" + table_merge['Filename'][ind]  + ")"

table_merge.set_index('Model_Id', inplace=True)

# Drop unnecessary columns for the table
table_merge.drop(columns=['Communication','Frequency','Encrypted','Filename'], inplace=True)

# custom vuepress class call
custom_class = "--- \n pageClass: table-generated-page \n---\n"

# Convert to Markdown and save per Brand
table_merge.sort_values(by=['Brand'], inplace=True, key=lambda col: col.str.lower())
table_md = table_merge.to_markdown()
file = open("devices_by_brand.md", 'w')
n = file.write(custom_class + "# Sorted by brand \n" + table_md)
file.close()

# Convert to Markdown and save per Model_Id
table_merge.sort_values(by=['Model_Id'], inplace=True, key=lambda col: col.str.lower())
table_md = table_merge.to_markdown()
file = open("devices_by_model.md", 'w')
n = file.write(custom_class + "# Sorted by model Id \n" + table_md)
file.close()
