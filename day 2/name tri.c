#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter side 1= ");
	scanf("%d",&a);
	printf("Enter side 2= ");
	scanf("%d",&b);
	printf("Enter side 3= ");
	scanf("%d",&c);
	if(a==b && b==c)
	{
		printf(" The Triangle is equilateral");
	}
	else if(a==b || a==c || b==c)
	{
		printf("The Trianlge is isosceles");
	}
	else
	{
		printf("The Trianlge is scalene");
	}
}
