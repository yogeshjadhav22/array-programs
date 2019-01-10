#include<stdio.h>
#include<stdlib.h>
int i,j;

void insert(int arr[][],int n)
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		 {
			scanf("%d",&arr[i][j]);
		 }
	}	
}
void display(int arr[][],int n)
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",arr[i][j]);
		}
	}
}
int main()
{
	int arr=[10][10],n;
	printf("\n enter the diamation");
	scanf("%d",&n);
	insert(arr,n);
	display(arr,n);
}

