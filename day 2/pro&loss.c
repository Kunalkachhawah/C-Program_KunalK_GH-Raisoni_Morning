#include<stdio.h>
void main()
{
	int sellp,costp,pro,loss;
	printf("enter selling price  = ");
	scanf("%d",&sellp);
	printf("enter cost price  = ");
	scanf("%d",&costp);
	pro=sellp-costp;
	loss=costp-sellp;
	if(pro>loss)
	{
		printf("the profit of rupees %d",pro);
	}
	else
	{
		printf("the loss of rupees %d",loss);
	}
}
