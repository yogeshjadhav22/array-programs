def check(ar,d,n):
    i=0
    for j in range(0,d):
     
	p=ar[i]
	ar.remove(p)
	print p
	ar.append(p)
	print ar
	
	





n=input()
d=input()
ar=[]
for i in range(0,n):
	p=input()
	ar.append(p)
check(ar,d,n)
