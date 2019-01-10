def reorder(arr,index,n):
	temp=[0]*n
	for i in range(0,n):
		temp[index[i]]=arr[i]
	
	print "check"
	for i in temp:
		print i,
	print("\n")
	for i in range(0,n):
		arr[i]=temp[i]
		index[i]=i
	for i in arr:
		print i,



arr=[50,40,70,60,90]
index=[3,0,4,1,2]
n=len(arr)
reorder(arr,index,n)
