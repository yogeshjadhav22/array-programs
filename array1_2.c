#include<stdio.h>

int array(int *arr,int k,int n)
{
	int temp[100];
	int i;
	for(i=0;i<k;i++)
	{
		temp[i]=arr[i];
	}
	printf("\n");
	for(i=0;i<k;i++)
	{
		printf("%4d",temp[i]);
	}
	for()
	
}

int main()
{
	int arr[100],k,n,i;
	printf("\n enter the limit of array");
	scanf("%d",&n);
	printf("\n enter the rot number");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	array(arr,k,n);
}
