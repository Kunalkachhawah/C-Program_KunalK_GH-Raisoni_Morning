#include<stdio.h>
void main()
{
	int num1 ,num2 ,num3;
	printf("enter first number = ");
	scanf("%d",&num1);
	printf("enter second number = ");
	scanf("%d",&num2);
	printf("enter third  number = ");
	scanf("%d",&num3);
	if(num1>num2)
	{
		printf("num1 is greater %d",num1);
	}
	else if(num2>num3)
	{
		printf("num2 is greater %d", num2);
	}
	else if(num3>num1)
	{
		printf("num3 is greater %d", num3);
	}
	else 
	{
		printf("  the three numbers are  same");
	}
}
