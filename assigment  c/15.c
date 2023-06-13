/*write a program make a sumation of given number(E.g.1523 Ans:-11)*/
#include<stdio.h>
void main()
{
	int num,sum=0;
	printf("enter number");
	scanf("%d",&num);
	while(num!=0)
	{
		sum+=num%10;
		num=num/10;
	}
	printf("sum of digits= %d",sum);
}
