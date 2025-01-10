#include<stdio.h>
void main()
{
	int num1;
	printf("enter first number = ");
	scanf("%d",&num1);
	if(num1>0)
	{
		printf("number is positive %d",num1);
	}
	else if(num1<0)
	{
		printf("number is neagtive %d", num1);
	}
	else if(num1==0)
	{
		printf("number  is  Zero %d", num1);
	}
	else 
	{
		printf("======================");
	}
}
