#include<stdio.h>
#include<stdlib.h>

int check(int *arr,int n)
{
	int i,arr2[100],p=0;
	int q=1;
	for(i=0;i<n;i++)
	{
		if(arr[i]>0)
		{	
			arr2[p]=arr[i];	
			p=p+2;
		}
		else
		{
			arr2[q]=arr[i];
		}
		
	}
	int n1;
	n1=(sizeof(arr2)/sizeof(arr2[0]));
	for(i=0;i<n1;i++)
	{
		printf("\n%4d",arr2[i]);
	}
}

int main()
{
	int i,arr[100],n;
	printf("\n enter the number of limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	check(arr,n);
}
