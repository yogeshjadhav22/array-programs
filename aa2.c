#include<stdio.h>
#include<stdlib.h>
int main()
 {
	int a[10];
	int i,n,pos;
	printf("\n enter the limit of array");
	scanf("%d",&n);
	printf("\n enter the elements of array");
	for(i=0;i<n;i++)
	 {
	   scanf("%d",&a[i]);
	 }
	printf("\n display the array\n");
	for(i=0;i<n;i++)
	{
	
		printf("%d\t",a[i]);
	}
	printf("\n enter the index number");
	scanf("%d",&pos);
	printf("\ndelete elements\n");
	for(i=pos+1;i<n;i++)
	 {
		a[i-1]=a[i];
	 }
	//printf("\n display");
	for(i=0;i<n-1;i++)
	 {
		printf("%d\t",a[i]);	
	 }
 }
