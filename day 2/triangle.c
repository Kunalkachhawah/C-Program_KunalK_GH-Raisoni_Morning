#include<stdio.h>
void main()
{
	int A1,A2,A3;
	printf("Enter Angle A1= ");
	scanf("%d",&A1);
	printf("Enter Angle A2= ");
	scanf("%d",&A2);
	printf("Enter Angle A3= ");
	scanf("%d",&A3);
	if(A1+A2+A3==180)
	{
		printf(" The Triangle is valid");
	}
	else
	{
		printf("The Trianlge is Invalid");
	}
}
