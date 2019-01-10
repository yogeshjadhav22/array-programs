def sum1(arr,n,x):
	for i in range(0,n-1):
		if(arr[i]>arr[i+1]):
			break

	print(i)


arr=[11,15,26,38,9,10]
sum11=16
n=len(arr)
if(sum1(arr,n,sum11)):
	print("array has two number with sum 16")
else:
	print("arrray doesn't have two elements with sum 16")

