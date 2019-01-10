#include<stdio.h>

int check(int *arr,int n)
{
	int i,temp,p=0;
	int arr1[100];
	for(i=0;i<n;i++)
	{
		temp=arr[i];
		arr1[temp]=i;
		
	}
	for(i=0;i<n;i++)
	{
		printf("%4d",arr1[i]);
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

