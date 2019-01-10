#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 25
int main()
{
	
	char *str=(char *)malloc(sizeof(char)*max);
		//scanf("%s",str);
	//	char r=getchar();
	//	int l=strlen(str);
	//	putchar(r);
	//	printf("\n len is %d",l);
	//	printf("\nstring is %s\n",str);
	char buf[max];
	printf("enter the string\n");
	gets(buf);
	int i=strlen(buf);
	printf("len of string is::-%d\n",i);
	printf("string is %s\n ",buf);
	
}
