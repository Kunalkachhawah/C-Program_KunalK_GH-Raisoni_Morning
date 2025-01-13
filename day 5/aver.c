#include<stdio.h>
void main()
{
	int i=1,sum=0,num;
	 float ave;
	printf("\nEnter A Number == ");
	scanf("%d",&num);
	
	while(i<=num)
	{
	
		sum=sum+i;
		//ave=sum/10;
		i++;
		
			
	}
	ave=sum/10;
	printf("\n%d",sum);
	printf("\n%f",ave);
}
