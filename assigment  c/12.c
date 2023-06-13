/*WAP to print Fibonacci series up to given numbers */
#include<stdio.h>
void main()
{
	int i,n=10,n1=0,n2=1,n3;
	printf("%d %d",n1,n2);
	for(i=0;i<=n;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("\n %d",n3);
	}
}
