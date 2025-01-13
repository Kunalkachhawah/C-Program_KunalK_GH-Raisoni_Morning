#include<stdio.h>
void main()
{
	int num, i,sum =0;
	printf(" enter the positive no");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("\n%d",i);
		sum=sum+i;
	}
	printf("\n%d",sum);
}
