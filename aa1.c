#include<stdio.h>
#include<stdlib.h>

int main()
  {
  	int a[10];
	int i,n,num,pos;
	  printf("\n enter the limit of array");
	  scanf("%d",&n);
	  printf("\n enter the elemenys of array");
	  for(i=0;i<n;i++)
	  {
		scanf("%d",&a[i]);
	  }
	printf("\n display the array");
	for(i=0;i<n;i++)
	 {
		printf("%d\t",a[i]);
	 }
	printf("\n enter the which location insert elements in index number");
	scanf("%d",&pos);
	printf("\n enter the insert number");
	scanf("%d",&num);
	for(i=n;i>=pos;i--)
	  {
		a[i+1]=a[i];
	  }
	a[pos]=num;
	printf("display \n");
	for(i=0;i<=n;i++)
	  {
		printf("%d\t",a[i]);
	  }
}
