#include<stdio.h>
int arrayro(int arr[],int n,int d)
{
	rArray(arr,0,d-1);
	rArray(arr,d,n-1);
	rArray(arr,0,n-1);
	
/*	while(d!=0)
	{	temp=arr[0];
		for(int i=0;i<n;i++)
		{
			arr[i]=arr[i+1];
		}
		arr[n-1]=temp;
		d--;
	}
	for(int i=0;i<n;i++)
        {
                printf("%4d",*(arr+i));
        }
	
*/
	

}
void rArray(int arr[],int start,int end)
{
	int temp;
	while(start<end)
	
	{
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
	


int main()
{
	int n,k,i;
	int arr[10];
	printf("\n enter the limit of array");
	scanf("%d",&n);
	printf("\n enter the number of rotation");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	arrayro(arr,n,k);
	for(i=0;i<n;i++)
	{
		printf("%4d",arr[i]);
	}
}
