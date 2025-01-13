#include<stdio.h>
void main()
{
	int i=1,fact=1,num;
	printf("\nEnter A Number == ");
	scanf("%d",&num);
	
	while(i<=num)
	{
	
		fact=fact*i;
		i++;
	printf("\n%d",fact);
		
			
	}
	printf("\n%d",fact);
}
