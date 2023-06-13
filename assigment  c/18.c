/*WAP of addition,subtraction,multiplication and division using switch case.*/
#include<stdio.h>
void main()
{
	int choice,a,b;
	printf("enter your choice");
	scanf("%d",&choice);
	printf("enter first num");
	scanf("%d",&a);
	printf("enter second num");
	scanf("%d",&b);
	
	switch(choice)
	{
		case 1:
			printf("addition=%d",a+b);
			break;
		case 2:
			printf("subtraction=%d",a-b);
			break;
        case 3:
			printf("multiplication=%d",a*b);
			break;
        case 4:
			printf("division=%f",(float)a/b);
			break;
			default:
				printf("invaild op");

	}

}
