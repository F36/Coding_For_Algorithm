# -*- coding: utf-8 -*-
"""
Created on Sun Mar 20 20:07:36 2016

@author: ChenSheng

e-mail: chensheng0802@outlook.com
"""

"""
插入排序算法
"""

def InsertionSort(List):
    length = len(List)
    for i in range(1,length):
        key = List[i]
        j = i-1
        while j >= 0:
            if List[j] > key:
                List[j+1] = List[j]
                List[j] = key
            j -= 1
    return List
    
def InsertionSort_2(List):
    length = len(List)
    if length <= 1:
        return List
    SortedList = []
    for item in List:
        i = len(SortedList)
        while i > 0 and SortedList[i] > item:
            i -= 1
        SortedList.insert(i, item)
    
    
    
    
    
    
    
    
    
    
    
    