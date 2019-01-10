#include<stdio.h>
#include<stdlib.h>

int check(int *arr,int n)
{
	int count=0,temp,i;
	for(i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			temp=arr[count];
			arr[count]=arr[i];
			arr[i]=temp;
			count=count+1;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%4d",arr[i]);
	}

}
	int main()
	{
		int n,arr[100],i;
		printf("enter the number of limit");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		check(arr,n);	
	}
	

