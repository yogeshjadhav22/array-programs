#include<stdio.h>

int pairsort(int *arr,int n,int x)
{
	int i,l,r;
	for(i=0;i<n;i++)
	{
		if(arr[i]>arr[i+1])
		{
			break;
		}
	}
	l=(i+1)%n;
	r=i;
	while(l!=r)
	{
		if(arr[l]+arr[r]==x)
		{
			return 1;
		}
		if(arr[l]+arr[r]<x)
		{
			l=(l+1)%n;

		}
		else
		{
			r=(n+r-1)%n;
		}
	}
	return -1;
}
int main()
{
	int arr[100],n,i,k;
		printf("\n enter the limit of array");
		scanf("%d",&n);
		printf("\n enetr the sum of elements");
		scanf("%d",&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		int p=pairsort(arr,n,k);
		if(p==1)
		{
			printf("array elements in array sum ");
		}
		else
		{
			printf("not faound is array elements");
		}

}
