def reva(arr,n):
	arr1=[]
	l=len(arr)-1
	for i in range(0,n):
		p=arr[l]
		arr1.append(p)
	
	        l-=1
	print arr1




n=input()
arr=[]
for i in range(0,n):
	p=input()
	arr.append(p)
reva(arr,n)
