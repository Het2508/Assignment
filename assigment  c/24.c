/*WAP to reverse a string and check that the string palindrome or not*/
#include<stdio.h>
void main()
{
	int i,j,l=0;
	char a[100],b[100],temp;
	printf("enter string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		l++;
		b[i]=a[i];
	}
	j=l-1;
	for(i=0;i<j;i++)
	{
		temp=b[i];
		b[i]=b[j];
		b[j]=temp;
		j--;
	}
	puts(a);
	printf("\n");
	puts(b);
	j=0;
	for(i=0;i<l;i++)
	{
		if(a[i]!=b[i])
		j++;
	}
	if(j==0)
	printf("\nstring is palindrome");
	else
	printf("\nstring is not palindrome");
	
}
