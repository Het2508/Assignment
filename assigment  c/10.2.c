/*2. Vowel or Consonant using switch case*/
#include<stdio.h>
void main()
{
	char ch;
	printf("enter alphbet");
	scanf("%c",&ch);
	switch(ch)
	{
		case'a':
			printf("vowel");
			break;
		case'e':
			printf("vowel");
			break;
		case'i':
			printf("vowel");
			break;
		case'o':
			printf("vowel");
			break;
	
		case'u':
			printf("vowel");
			break;
		default:
			printf("consonant");
		
	}
}
