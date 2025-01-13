#include<stdio.h>
void main()
{
	int n,org,sum=0,rem;//initialisation
    printf("Enter the Number== ");
    scanf("%d",&n);//user
    org=n;
	while(n>0)//loop
	{//logic
		rem=n%10;//Remainder
		sum=sum+(rem*rem*rem);//(1*3)(1*3)(1*3)
		n=n/10; //quotient
		
    }
		if(org==sum)
		{
			printf("the number is armstromg%d == ",sum);
		}
		else
		{
			printf("the number is not armstrong%d == ",sum);
		}
	
}
