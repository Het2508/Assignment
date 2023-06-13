/*Write a program of structure employee that provides the following information -print and display empno, empname, address and age*/
#include<stdio.h>
#include<string.h>
struct employee
{
	int e_no,age;
	char name[20],address[200];
}e;
void main()
{
	e.age=20;
	strcpy(e.address,"143,sumrti darshan society p.d pandya collage road ghodasher Ahmedabad-380050");
	e.e_no=1;
	strcpy(e.name,"Het Patel");
	printf("Employee No:%d",e.e_no);
	printf("\nEmployee Name:");
	puts(e.name);
	printf("Employee age:%d",e.age);
	printf("\nEmployee Address:");
	puts(e.address);
 	 
}
