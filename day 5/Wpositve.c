#include<stdio.h>
void main()
{
	int num;
	printf("\nEnter A Number == ");
	scanf("%d",&num);
	
	while(num<0)
	{
			printf("\nEnter A positive Number & try again == ");
	        scanf("%d",&num);
	}
}
