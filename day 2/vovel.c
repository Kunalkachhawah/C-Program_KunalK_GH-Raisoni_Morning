#include<stdio.h>
void main()
{
	char ch;
	
	printf("enter character = ");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' )
	{
		printf("it is a VOVELS");
	}
	else 
	{
		printf("it is A CONSONENT");
	}
}
