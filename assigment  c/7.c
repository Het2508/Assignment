/* WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) */
/*Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)*/ 
#include<stdio.h>
void main()
{
	char op;
	printf("enter op");
	scanf("%c",&op);
	int a,b;
	printf("enter a,b");
	scanf("%d %d",&a,&b);
	switch(op)
	{
		case'+':
			printf("add =%d",a+b);
			break;
		case'-':
			printf("sub =%d",a-b);
			break;
		case'*':
			printf("mul =%d",a*b);
			break;
		case'/':
			printf("div =%f",(float)a/b);
			break;
		case'%':
			printf("mod =%d",a%b);
			break;
		default:
		    printf("invalide op");		
	}
}
