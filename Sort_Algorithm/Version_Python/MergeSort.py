# -*- coding: utf-8 -*-
"""
Created on Sun Mar 20 22:20:17 2016

@author: ChenSheng

e-mail: chensheng0802@outlook.com
"""

"""
归并排序

"""
def Merge(LList, RList):
    i, j = 0, 0
    result = []
    while i < len(LList) and j < len(RList):
        if LList[i] < RList[j]:
            result.append(LList[i])
            i += 1
        else:
            result.append(RList[j])
            j += 1
    result += LList[i:]
    result += RList[j:]
    return result


def MergeSort(List):
    if len(List) <= 1:
        return List
    mid = int(len(List) / 2)
    LList = MergeSort(List[:mid])
    RList = MergeSort(List[mid:])
    return Merge(LList, RList)
    
    
























