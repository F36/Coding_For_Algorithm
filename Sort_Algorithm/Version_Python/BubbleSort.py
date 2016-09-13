# -*- coding: utf-8 -*-
"""
Created on Sun Mar 20 19:45:09 2016

@author: ChenSheng

e-mail: chensheng0802@outlook.com
"""

"""
冒泡算法
"""

def BubbleSort(A):
    length = len(A)
    for i in range(length):
        for j in range(1,length):
            if A[j-1] >= A[j]:
                A[j-1], A[j] = A[j], A[j-1]
    return A