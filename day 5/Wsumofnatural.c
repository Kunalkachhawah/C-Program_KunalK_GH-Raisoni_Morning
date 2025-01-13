#include<stdio.h>
void main()
{
	int i=1,sum=0,num;
	printf("\nEnter A Number == ");
	scanf("%d",&num);
	
	while(i<=num)
	{
		printf("\n%d",i);
		sum=sum+i;
		i++;
		
			
	}
	printf("\n%d",sum);
}
