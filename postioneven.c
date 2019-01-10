#include<stdio.h>
#include<stdlib.h>

int check(int *arr,int n)
{	
	int i,temp,p=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>0 && i%2!=0)
		{
			temp=arr[p];
			arr[p]=arr[i];
			arr[i]=temp;
			p+=2;
		}
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

