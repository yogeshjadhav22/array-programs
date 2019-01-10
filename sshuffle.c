#include<stdio.h>
#include<stdlib.h>

int swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int check(int *arr,int n)
{
	int i;
	for(i=n-1;i>0;i--)
	{
	
		int j=rand() % (i+1);
		printf("valuee:%4d\n ",j);
		swap(&arr[i],&arr[j]);
	}
	for(i=0;i<n;i++)
	{
		printf("%4d",arr[i]);
	}
}

int main()
{
        int i,n,arr[100];
        printf("\n enter the limiyt of arrray");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        check(arr,n);
  //      large(arr,n);
}

