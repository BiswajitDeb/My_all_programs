import pandas as pd  
    
# Initialise data to lists.  
data = [{'Geeks': 'dataframe', 'For': 'using', 'geeks': 'list'}, 
        {'Geeks':10, 'For': 20, 'geeks': 30}]  
    
# Creates DataFrame.  
df = pd.DataFrame(data, columns =['row1', 'row2'])  
    
# Print the data  
print(df)