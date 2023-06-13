/*write a program you have  to make a suumation of first and last digit(E.g1234 Ans:-5)*/
#include<stdio.h>
void main()
{
	int n,sum=0,firstdigit,lastdigit;
	printf("enter the number to find sum of first and last digit");
	scanf("%d",&n);
	lastdigit=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	firstdigit=n;
	sum=firstdigit+lastdigit;
	printf("sum of first and last digit=%d",sum);
}
