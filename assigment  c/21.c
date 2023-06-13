/*WAP to take two array input from user and sort them in ascending or descending order as per users choice*/
#include<stdio.h>
void main()
{
	int i,j,a[10],temp;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<9;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	
	}
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
}
