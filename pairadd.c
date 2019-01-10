#include<stdio.h>

int check(int *arr,int n,int k)
{
	int i,j,p,sum=0,d,q;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-2;j++)
		{		
			//p=arr[i]+arr[j];
			sum=0;
			q=j;
			for(d=0;d<2;d++)
			{
				sum=sum+arr[q];
				q++;
			}
			sum=sum+arr[i];
			if(sum==k)
			{
				printf("(%d,%d,%d)\n",arr[i],arr[j],arr[j+1]);
			
			}
			
		}
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
	printf("enter the key add elements");
	int k;
	scanf("%d",&k);
        check(arr,n,k);
  //      large(arr,n);
}

