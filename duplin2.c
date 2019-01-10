#include<stdio.h>
#include<stdlib.h>

int dublicate(int *arr,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
			   printf("dublicate elements::%d",arr[i]);
			   break;
			}
			
		}
	}
	printf("\n not dublicate elements in list");
}
int dublicatesort(int *arr,int n)
{	
	int i;
	for(i=0;i<n-1;i++)
	{
		if(arr[i]==arr[i+1])
		{
			printf("\n dublicate elements is ::%d",arr[i]);
			break;
		}
		
	}
	printf("\n dublicate elements are not array");
}
int main()
{
	int *arr;
	int i,n;
	printf("\n enter the number of elements");
	scanf("%d",&n);
	arr=(int *)malloc(n * sizeof(int));
	printf("\n enter the array elements");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	//dublicate(arr,n);
	dublicatesort(arr,n);
}
