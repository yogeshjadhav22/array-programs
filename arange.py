def check(arr,n):
	arr1=[]
	for i in range(0,n):
		p=arr[i]
		arr1[p]=i
		p=p+1
	print arr1

n=input()
arr=[]
for i in range(0,n):
	p=input()
	arr.append(p)

n=len(arr)
check(arr,n) 
