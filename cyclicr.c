#include<stdio.h>

void rotate(int arr[],int n)
{
	int x=arr[n-1],i;
	for(i=n-1;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=x;
}

int main()
{
	int arr[100];
	int i,n;
	printf("enter the number of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	rotate(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%4d",arr[i]);
	}
	
}

