arr=[]
n=input("enter the limit of array")
for i in range(0,n):
	p=input()
	arr.append(p)
print arr
arr1=[]
for  i in arr:
	if i not in arr1:
		arr1.append(i)
print arr1	
sum1=0
for ii in arr1:
	count=0
	for i in range(0,len(arr)):
	    if ii==arr[i]:
		count+=1
	
	p=count/2
	sum1=sum1+p
	
print sum1
	
