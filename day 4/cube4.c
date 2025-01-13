#include<stdio.h>
void main()
{
	int num,n, i,cube =0;
	printf("\nEnter the number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("\nEnter any numbers that you want cube\n");
	    scanf("%d",&n);
		cube=n*n*n;
		printf("\n Cube of n numbers %d",cube);
	}
//	printf("\n%d",cube);
}
