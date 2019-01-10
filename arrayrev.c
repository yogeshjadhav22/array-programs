#include<stdio.h>
#include<stdlib.h>
int i;

void accpet(int *arr,int n)
  {
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
  }

 void display(int *arr,int n)
  {
	for(i=0;i<n;i++)
	 {
		printf("\n arr[%d]::%d",i,arr[i]);
	 }
  }

	void arrayadd(int *arr,int n)
	 {
		int sum=0;
		for(i=0;i<n;i++)
	   	 {
			sum=sum+arr[i];
	     	 }
	 	printf("\n addition of array:%d",sum);
	 }
	void revarray(int *arr,int n)
	 {
		for(i=n-1;i>=0;i--)
		 {
			printf("\n arr[%d]::%d:",i,arr[i]);
		 }

	 }
int main()
{
	int *arr;
	int n;
	printf("\n enter the limit of array");
	scanf("%d",&n);
	arr=(int *)malloc(sizeof(int)*n);
	printf("\n  enter the array elements");
	accpet(arr,n);
	printf("\n display the array");
	display(arr,n);
	printf("\n addition of array");
	arrayadd(arr,n);
	printf("\n array rev ");
	revarray(arr,n);
}
