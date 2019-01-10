#include<stdio.h>
#include<stdlib.h>
int i,j;
void  accept(int **arr,int r,int c)
	  {
			for(i=0;i<r;i++)
			  {
			arr[i]=(int *)malloc(sizeof(int)*r);
			  }
			for(i=0;i<r;i++)
		 	  {
				for(j=0;j<c;j++)
				 {
				scanf("%d",&arr[i][j]);
				 }
			  }
	  }

void  display(int **arr,int r,int c)
{
		for(i=0;i<r;i++)
		  {
			for(j=0;j<c;j++)
			 {
				printf("%4d",arr[i][j]);
			 }
			printf("\n ");
		  }
}

int main()
{
	int **arr;
	int r,c;
	printf("\n  enter the row size");
	scanf("%d",&r);
	printf("\n enter the column size");
	scanf("%d",&c);
	arr=(int **)malloc(sizeof(int *)*r);
	printf("\n enter the array");
	accept(arr,r,c);
	printf("\n display the array \n ");
	display(arr,r,c);
}
