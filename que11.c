#include<stdio.h>
void main()
{
	float w1,w2,nOp1,nOp2,Average;
	printf("\nEnter weight w1 ==");
	scanf("%f",&w1);
	printf("\nEnter weight w2 ==");
	scanf("%f",&w2);
	printf("\nEnter Number of Purchase 1 ==");
	scanf("%f",&nOp1);
	printf("\nEnter Number of Purchase 2==");
	scanf("%f",&nOp2);
	Average= ((w1*nOp1)+(w2*nOp2))/(nOp1+nOp1);
	printf("\nthe average value %f===",Average);
	
}
