#include<stdio.h>
void main()
{
	int i=1,cube=0,num;
	printf("\nEnter A Number == ");
	scanf("%d",&num);
	
	while(i<=num)
	{
		printf("\n%d",i);
	cube=i*i*i;
		i++;
		printf("\n%d",cube);
			
	}
	//printf("\n%d",cube);
}
