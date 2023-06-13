/*write a program to find out the max from given number(E.g.no:-1562 max  number is 6)*/
#include<stdio.h>
void main()
{
	int i,max=0,a[5];
	printf("enter five element");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
	{
		max=a[i];
	}
		else
	{
		printf("max=%d \n",max);
	}
}
	
}
