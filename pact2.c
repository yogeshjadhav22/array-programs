#include<stdio.h>
#include<stdlib.h>

	int accept(int a[10][20],int n,int m)
	   {
		int i,j;
		for(i=0;i<n;i++)
		  {
		    for(j=0;j<m;j++)
		      {
			scanf("%d",&a[i][j]);
		      }
		  }
		
	   }
	
	int display(int a[10][20],int n,int m)
	   {
		int i,j;
		for(i=0;i<n;i++)
		  {
		    for(j=0;j<m;j++)
		      {
			printf("%2d",&a[i][j]);
		      }
		    printf("\n")
		  }
	   }


int main()
{
	int i,j;
	int n,m,a[10][10];
	printf("\n enter the limit of row");
	scanf("%d",&n);
	printf("\n enter the limit of cloumn");
	scanf("%d",&m);
	accept(a[10][20],n,m);
	display(a[10][20],n,m);
}
