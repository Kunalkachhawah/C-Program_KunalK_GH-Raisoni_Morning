#include<stdio.h>
void main()
{
	int n,num, i,sum =0;
	float ave;
    printf(" enter the the number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
	    printf("\nenter the number");
		scanf("%d",&num);
		sum=sum+num;
		ave=sum/10;
	
		
	}
	printf("\n%d",sum);
	printf("\n%f",ave);
}
