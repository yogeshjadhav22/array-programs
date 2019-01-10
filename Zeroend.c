#include<stdio.h>
#include<stdlib.h>

int check(int *arr,int n)
{
	int i,count=0,p=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			arr[p]=arr[i];
			p+=1;
		}
		else
		{
			count+=1;
		}
	}
	int d=n-count;
	for(i=0;i<count;i++)
	{
		arr[d]=0;
		d=d+1;
	}
	for(i=0;i<n;i++)
	{
		printf("%4d",arr[i]);
	}
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

