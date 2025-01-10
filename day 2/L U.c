#include<stdio.h>
void main()
{
	char ch;
	printf("enter character = ");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	{
		printf("it is a  lowercase character");
	}
	else 
	{
		printf("it is not a  uppercase character");
	}
}
