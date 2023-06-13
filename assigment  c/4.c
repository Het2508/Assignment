/* WAP to find simple interest */
#include<stdio.h>
void main()
{
	int principal,rate,time,interest;
	printf("enter principal:");
	scanf("%d",&principal);
	printf("enter rate:");
	scanf("%d",&rate);
	printf("enter time:");
	scanf("%d",&time);
	interest=principal*rate*time/100;
	printf("the simple interest is %d",interest);
}
