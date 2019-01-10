#include<stdio.h>

int check(int *arr,int *ind,int n)
{
		int i,p,temp;
	
		for(i=0;i<=n/2;i++)
		{
			p=ind[i];
			temp=arr[p];
			arr[p]=arr[i];
			arr[i]=temp;
		}
		for(i=0;i<n-1;i++)
		{
			if(ind[i]>ind[i+1])
			{
				temp=ind[i];
				ind[i]=ind[i+1];
				ind[i]=temp;
				
			}
		}	
		for(i=0;i<n;i++)
		{
			printf("%4d",arr[i]);
		}
		printf("\n");
		for(i=0;i<n;i++)
                {
                        printf("%4d",ind[i]);
                }
}

int main()
        {
                int n,arr[100],i;
		int ind[100];
                printf("enter the number of limit");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                        scanf("%d",&arr[i]);
                }
		printf("\n index is\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&ind[i]);
		}
                check(arr,ind,n);
        }

                
