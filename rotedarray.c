#include<stdio.h>

int leftrotatebyone(int arr[],int n)
{
	int temp=arr[0],i;
	for(i=0;i<n-1;i++)
	  {
		arr[i]=arr[i+1];
		arr[i]=temp;
	  }
}
int leftrotate(int arr[],int d,int n)
    {
	for(int i=0;i<d;i++)	
	  {
	     leftrotatebyone(arr,n);
	  }
    }
int printa(int arr[],int n)
{
      for(int i=0;i<n;i++)
	 {
		printf("\n %d",arr[i]);
	 }
}
int main()
{
   int arr[]={1,2,3};
   int n=sizeof(arr[0]);
//   printf("%d",n);
   leftrotate(arr,2,n);
    printa(arr,n);
}
