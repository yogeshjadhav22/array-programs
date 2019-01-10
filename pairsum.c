#include<stdio.h>

int check(int arr[],int n,int k)
{
	int i,j;
	int flag=0;
	for(i=0;i<n-1;i++)
	{
		for(j=1;j<n;j++)
		{
			int p=arr[i]+arr[j];
			if(p==k)
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("true");
		printf("there is a pair(%d,%d)with sum %d",arr[j],arr[i-1],k);
	}
	else
	{
		printf("false");
	}
	
}

int main()
{
	int arr[100],i;
	int n,k;
	printf("\n enter the limit of array");
	scanf("%d",&n);
	printf("enter the sum number");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	check(arr,n,k);
}
