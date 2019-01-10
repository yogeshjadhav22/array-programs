#include<stdio.h>
#include<stdlib.h>
#include<string.h>
	
	int main()
	  {
		 char str[6][10];
		int i;
		printf("\n enter the string ");
		for(i=0;i<6;i++)
		  {
			scanf("%s",str[i]);
		  }
		printf("\n display the string:");
		for(i=0;i<6;i++)
		  {
			printf("%s",str[i]);
			printf("\n");
		  }	
	  }
