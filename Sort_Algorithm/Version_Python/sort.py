import random
def BubbleSort(num)：
	n = len(num)
	for i in range(0, n):
		for j in range(i,n):
			if num[i] > num[j]:
				num[i], num[j] = num[j],num[i]
	return num

	
def SelectSort(num):
	for i in range(0, len(sum)):
		mindex = i
		for j in range(i, len(num)):
			if num[mindex] > num[j]:
				mindex = j
		num[mindex], num[i] = num[i], num[mindex]
	return num
	

def InsertSort(num):
	for i in range(1, len(num)):
		j = i - 1
		key = num[i]
		while j > 0 and key < num[j]:
			num[j+1] = num[j]
			j -= 1
		num[j+1] = key
	return num

			
			
