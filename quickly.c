#include<stdio.h>
int check(int *arr,int n,int k)
{
	int mod=k%n;
	for(int i=0;i<n;i++)
	{
		printf("%4d",arr[(mod+i)%n]);
	}
	printf("\n");
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
	int k1=1;
	int k2=3;
	int k3=4;
	int k4=6;
        check(arr,n,k1);
	check(arr,n,k2);
	check(arr,n,k3);
	check(arr,n,k4);

}
