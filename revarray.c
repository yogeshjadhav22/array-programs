#include<stdio.h>
#include<stdlib.h>

int check(int *arr,int n)
{
	int temp;
	int p=n-1,i;
	for(i=0;i<n-1;i++)
	{
		temp=arr[p];
		arr[p]=arr[i];
		arr[i]=temp;
		p--;
	}
	for(i=0;i<n;i++)
	{
		printf("%4d",arr[i]);
	}
}

int main()
{
	int arr[100],n,i;
	printf("\n enter the limit of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	check(arr,n);
}
