#include<stdio.h>
void main()
{
	int num,org,rev=0,rem;
	printf("\nEnter A Number == ");
	scanf("%d",&num);
	org=num;
	while(num>0)
	{
	
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
			
	}
	
		if(rev == org)
	{
		printf("it is palindrome no %d",org);
		
	}
	else
	{
		printf("it is  not palindrome no %d",org);
	}
	//	printf("\n%d",rev);
}
