#include<stdio.h>
#include<stdlib.h>
void main()
{
	char *str;
	int n;
	printf("enter the number of charecter");
	scanf("%d",&n);
	str=(char *)malloc(sizeof(char)*n);
	printf("\n enter the char");
	for(int i=0;i<n;i++)
	  {
		scanf("%s",&str[i]);
	  }
	printf("\n display the char array\n ");
	for(int i=0;i<n;i++)
	  {
		printf("%4c",str[i]);
	  }
}
