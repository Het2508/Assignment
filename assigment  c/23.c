/*WAP find out length of string without using inbuilt function*/
#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	int i,l=0;
	printf("enter string a");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		l=l+1;
	}
	printf("length of string is=%d",l);
}
