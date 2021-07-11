# -*- coding: utf-8 -*-
"""
Created on Fri Mar  5 14:22:50 2021

@author: Lenovo
"""

sal_info = {'Rathan':45600, 'Ranjan':45620, 'Ramesh':5602}
print(sal_info)

sal_high = {k : v for k,v in sal_info.items() if v > 45000}
print(sal_high)