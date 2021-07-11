# -*- coding: utf-8 -*-
"""
Created on Fri Mar  5 10:29:26 2021

@author: Lenovo
"""
print('Hello')
numbers = dict(x=5, y=0)
print('numbers =', numbers)
print(type(numbers))

salinfo = dict(bangalore=56000, manglore=26000, mysore=78000)
print(salinfo)
if 'mangal' in salinfo:
    print('yes')
else:
    print('np')

for loc in salinfo:
    print(salinfo[loc])
