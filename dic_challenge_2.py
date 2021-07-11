# -*- coding: utf-8 -*-
"""
Created on Fri Mar  5 13:14:30 2021

@author: Lenovo
"""

import csv
with open('F:/Python/TreeOrdersSubset.csv', mode='r') as infile:
    reader = csv.reader(infile)
    mydict = {}
    for row in reader:
        if row[0] not in mydict:
            key = row[0]
            mydict[key] = row[1]
        else:
            mydict[row[0]] = int(mydict[row[0]]) + int(row[1])
infile.close()            
print(mydict)
