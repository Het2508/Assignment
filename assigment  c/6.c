/*WAP to convert years into days and days into years */
#include<stdio.h>
void main()
{
	int noofdays,years,weeks,days;
	printf("enter the number of days:");
	scanf("%d",&noofdays);
	years=noofdays/365;
	weeks=(noofdays%365)/7;
	days=(noofdays%365)%7;
	printf("\n years =%d",years);
	printf("\n weeks =%d",weeks);
	printf("\n days =%d",days);
       }
