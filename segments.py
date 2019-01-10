def check(x,len1,arr):

	arr1=[]
	d=len1-(x-1)
	for i in range(0,len1):
		if(i<d):
		   	p=min(arr[i:x+i])
			arr1.append(p)
	#print arr1
	p1=max(arr1)
	return p1


x=input();
n=input()
arr=[]
for i in range(0,n):
	p=input()
	arr.append(p)
#print arr

len1=len(arr)
a=check(x,len1,arr)
print "max elemnts",a
