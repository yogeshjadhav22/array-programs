#include<stdio.h>

int check(int *arr,int n)
{
	int temp,i,p=0;
	int sum=0;
	for(i=0;i<n-1;i++)
	{
		sum=0;
		if(arr[i]!=0 && arr[i]==arr[i+1])
		{
			 sum=arr[i]+arr[i+1];
			 arr[i]=sum;
			 arr[i+1]=0;
		}
	}
	for(i=0;i<n;i++)
	{
	     if(arr[i]>0)
	     {	
		temp=arr[p];
		arr[p]=arr[i];
		arr[i]=temp;	
		p=p+1;
	     }
	}
	for(i=0;i<n;i++)
	{
		printf("%4d",arr[i]);
	}
	printf("\n");
	

}

 int main()
        {
                int n,arr[100],i;
                printf("enter the number of limit");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                        scanf("%d",&arr[i]);
                }
                check(arr,n);
        }

