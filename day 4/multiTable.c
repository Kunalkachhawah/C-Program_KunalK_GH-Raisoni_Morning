#include<stdio.h>
void main()
{
	int n, i,multi=0;
    printf(" enter the number");
    scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		
		multi=n*i;
		printf("\n%d*%d=%d",n,i,multi);
	}

}
