#include<stdio.h>
void main()
{
	int num;
	printf(" enter the positive no");
	scanf("%d",&num);
	for(  ;num<0;  )
	{
	printf(" enter the positive no try again");
	scanf("%d",&num);
	}
}
