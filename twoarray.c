#include<stdio.h>
#include<stdlib.h>
void main()
{
	int **arr;
	int r,c;
	int i,j;
	printf("\n enter the row size");
	scanf("%d",&r);
	printf("\n enter the column size");
	scanf("%d",&c);
	arr=(int **)malloc(sizeof(int *)*r);
	for(i=0;i<r;i++)
	 {
	   arr[i]=(int *)malloc(sizeof(int)*c);
	 }
	printf("\n enter the array");

	for(i=0;i<r;i++)
	 {
	  for(j=0;j<c;j++)
	  {
		scanf("%d",&arr[i][j]);
	  }
	 }
	printf("\n display array \n ");
	for(i=0;i<r;i++)
	 {
	 for(j=0;j<c;j++)
	  {
		printf("%4d",arr[i][j]);
	  }
		printf("\n ");
	 }
	
	printf("\n ");
}
