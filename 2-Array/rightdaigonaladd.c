#include<stdio.h>
void main()
{
	int Arr_1[20][20], n,r,c, sum=0;
	printf("Enter the number of rows and   column of array\n");
		scanf("%d",&n);
	
	printf("Enter element of array\n");
	
	for(r=0;r<n;r++) //this loop is used for scanning user value to take input form user 
	{
		for (c=0;c<n;c++)
		{
			printf("\nelement is = [%d][%d]== ",r,c);
			scanf("%d",&Arr_1[r][c]);
		}
	}
	
	
	for(r=0;r<n;r++)//this loop is used for adding daigonal matrices
	{
		for (c=0;c<n;c++)
		{	
			if(r+c==n-1)
			{
		     sum=sum + Arr_1[r][c];
	        }
		}
	}
	
	printf("\nadding daigonal of an  Array Is\n");
	
	for(r=0;r<n;r++)//this loop is used for printing matrices
	{
		for (c=0;c<n;c++)
		{
          printf("%d ",Arr_1[r][c]);
          
		}
		printf("\n");
	}
		 printf("\n the sum of th right daigonal value %d ",sum);
}
