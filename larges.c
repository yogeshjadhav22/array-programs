#include<stdio.h>
#include<stdlib.h>

int check(int * arr,int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		    if(arr[j]>arr[j+1])
		     {
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		     }
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%4d",arr[i]);
	}

}

int large(int *arr,int n)
{
	int i,j=0,temp;
	
	int arr2[100];
	int p=n-1;
	for(i=0;i<n/2;i++)
	{
		arr2[j]=arr[p];
		arr2[j+1]=arr[i];
		j+=2;
		p=p-1;
	}
	if(n%2!=0)
	{
		arr2[j]=arr[i];
		printf("%4d\n",arr[i]);
	}
	printf("\n");
	//int n1=sizeof(arr2)/sizeof(arr2[0]);
	
	for(i=0;i<n;i++)
	{
		printf("%4d",arr2[i]);
	}
}

int main()
{
	int i,n,arr[100];
	printf("\n enter the limiyt of arrray");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	check(arr,n);
	large(arr,n);	
}

