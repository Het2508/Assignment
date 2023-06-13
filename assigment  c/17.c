/*write a program to find out the max number from given array using function*/
#include<stdio.h>
void main()
{
	int i,max,a[10];
	printf("enter 10 element");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("max=%d\n",max);
}
