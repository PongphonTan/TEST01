# -*- coding: utf-8 -*-
"""
Created on Fri Feb 15 13:07:02 2019

@author: SCMA-R203-
"""

#import numpy as np
#A = np.array([1, 2], [4, 5])
#B = np.array

import pandas as pd
import numpy as np

#df1 = pd.DataFrame([[1,2], [3,6]], columns = ["a", "b"], index= ["cat", "dog"])
#df2 = pd.DataFrame([[1,2], [5,4]], columns = ["a", "b"], index= ["cat", "dog"])
#print(pd.merge(df1, df2))
#print(pd.merge(df1, df2, how="inner"))
#print(pd.merge(df1, df2, how="outer"))
#pd.merge(df1, df2, how="left")
#pd.merge(df1, df2, how="right")


Data1 = np.array([[4, 8, 12], [7, 14, 21], [10, 20, 30]])
Data2 = np.array([[2, 4, 6, 8], [3, 6, 9, 12], [5, 10, 15, 20]])
df1 = pd.DataFrame(data = Data1, columns = ['a', 'b', 'd'])
df2 = pd.DataFrame(data = Data2, columns = ['a', 'b', 'c', 'd'])
df3 = pd.concat([df1, df2])
df3 = df3.reset_index()
df3 = df3.rename(columns = {"index": "ID"})
ID_List = ['X01', 'X02', 'X03', 'X04', 'X05', 'X06']
for i in range(len(df3.index)):
    df3.ID[i] = ID_List[i]

df2_B = pd.DataFrame(data = Data2)
df4 = pd.concat([df1, df2_B], axis = 1)



#df1 = pd.DataFrame({"ID": ["x1","x2","x3"], "GPA": [3.2, 2.75, 3.35]})
#df2 = pd.DataFrame({"ID": ["x1","x2","x4"], "GPA": [3.2, 2.75, 2.5]})
#print(df1)
#print(df2)
#print()
#print(pd.merge(df1, df2)
#print(pd.merge(df1, df2), how="outer")
#
#
#df1 = pd.DataFrame({"ID": ["x1","x2","x3"], "W": [65, 72.5, 55.6]})
#df2 = pd.DataFrame({"ID": ["x1","x2","x4"], "H": [165, 170, 160]})
#print(df1)
#print(df2)
#print()
#print(pd.merge(df1, df2, how="inner", on="ID"))
#print(pd.merge(df1, df2, how="outer", on="ID"))
#print(pd.merge(df1, df2, how="left", on="ID"))
#print(pd.merge(df1, df2, how="right", on="ID"))