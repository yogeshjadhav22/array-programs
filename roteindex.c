#include<stdio.h>
#include<stdlib.h>
int check(int *arr,int *range,int x)
{
	int p=0,q=0,n,i,j;
	n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<4;i+=2)
	{
		p=range[i];
		q=range[i+1];
		int temp=arr[q];
		for(j=q;j>0;j--)
		{	//printf("\n %4d:: %4d ",i,arr[i]);
			arr[j]=arr[j-1];
		}
		arr[j]=temp;
		
		for(j=0;j<=q;j++)
		{
			printf("%4d",arr[j]);
		}
		printf("\n");
	}
	return arr[x];
}

int main()
{
	int n,i,arr[100],range[100],x;
	printf("\n enter the limit of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n enetr the range of arrray rotar");
	for(i=0;i<4;i++)
	{
		scanf("%d",&range[i]);
	}
	printf("\n enter the index");
	scanf("%d",&x);
	int p=check(arr,range,x);
	printf("inde is array::%d",p);
}
