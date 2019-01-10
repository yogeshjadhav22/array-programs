#include<stdio.h>

int check(int *arr,int n)
{
	int i,j,max=0,sum=0,p;
	for(i=0;i<n;i++)
	{	sum=0;
		int temp=arr[0];
		for(j=0;j<n;j++)
		{
			p=arr[j]*j;
			sum=sum+p;
		//	printf("[%d,%d]::%d\n",i,j,sum);
			
		}
		if(max<sum)
		{
			max=sum;
		}
		printf("\n%d",sum);
		for(j=0;j<n-1;j++)
		{
			arr[j]=arr[j+1];
		}
		arr[n-1]=temp;
	}
	printf("\n max values of ration is :: %d",max);
}
int main()
{
	int arr[100],n,i,max=0;
	printf("\n enter the number of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	check(arr,n);
}
