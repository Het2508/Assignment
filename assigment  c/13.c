/*WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746*/
#include<stdio.h>
void main()
{
	int n,rev=0,digit;
	printf("enter number");
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		rev=(rev*10)+digit;
		n=n/10;
		}
	printf("rev =%d",rev);

}
