#include<stdio.h>
#include<stdlib.h>
int i;
void insert(int ar[],int n)
{
	
	for(i=0;i<n;i++)
	 {
		scanf("%d",&ar[i]);
	 }
}
void display(int ar[],int n)
{	
	for(i=0;i<n;i++)
	 {
		printf("%4d",ar[i]);
	 }
	
}
int main()
{
	int ar[10],n;
	printf("enter the number of elements");
	scanf("%d",&n);
	insert(ar,n);
	display(ar,n);
}
