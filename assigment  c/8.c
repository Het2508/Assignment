/* WAP to swap two numbers without using third variable */
#include<stdio.h>
void main()
{
	int a=5,b=3;
	printf("befour swap a=%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n after swap a=%d b=%d",a,b);
}
