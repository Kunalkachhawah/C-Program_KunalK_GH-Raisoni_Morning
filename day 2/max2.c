#include<stdio.h>
void main()
{
	int num1 ,num2;
	printf("enter first number = ");
	scanf("%d",&num1);
	printf("enter second number = ");
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("num1 is greater %d",num1);
	}
	else if(num1<num2)
	{
		printf("num2 is greater %d", num2);
	}
	else 
	{
		printf(" both  are same");
	}
}
