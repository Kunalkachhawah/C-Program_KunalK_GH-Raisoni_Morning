#include<stdio.h>
void main()
{
	int A=5,B=11;
	int InputNum;
	
	printf("enter number = ");
	scanf("%d",&InputNum);
	if(InputNum%A==0)
	{
	printf("number is divisal by 5");
    }
    else if(InputNum%B==0)
    {
    printf("number is divisal by 11");
    }
    else
    {
    printf(" number is not divisal by 5 or 11");
	}
    

	
	
}
