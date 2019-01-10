#include<stdio.h>
int check(int *arr,int n,int k)
{
	int mod=k%n;
	for(int i=0;i<n;i++)
	{
		printf("%4d",arr[(mod+i)%n]);
	}
	for(int i=0;i<n;i++)
	{	int a=0;
		//printf("%4d",arr[i]);
	}
}

int main()
{
 int n,i,arr[100],x;
        printf("\n enter the limit of array");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
	printf("\n enter the postion");
        scanf("%d",&x);
        check(arr,n,x);


}

