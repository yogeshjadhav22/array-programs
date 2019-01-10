def twono(a,b):	
	count=0
	arr=[]
	for i in range(1,a+1):
		if(a%i==0) and (b%i==0):
			count+=1		
	
			arr.append(i)
	print count
	print arr
		

a=input("enter the first number")
b=input("enter the second number")
twono(a,b)
