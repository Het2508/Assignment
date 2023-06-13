/*WAP to find reverse of string using recursion*/
#include<stdio.h>
int reverse(char a[],int i)
{
	if(a[i]=='\0')
	return 0;
	else
	{
		i++;
		reverse(a,i);
		printf("%c",a[i-1]);
	}
}
void main()
{
	char a[50];
	printf("enter string");
	gets(a);
	reverse(a,0);
	puts(a);
}
