#include<stdio.h>
void main()
{
	int Arr_1[3][3],r,c, sum=0;
	
	printf("Enter element of array\n");
	
	for(r=0;r<3;r++) //this loop is used for scanning user value to take input form user 
	{
		for (c=0;c<3;c++)
		{
			scanf("%d",&Arr_1[r][c]);
		}
	}
	
	
	for(r=0;r<3;r++)//this loop is used for adding daigonal matrices
	{
		for (c=0;c<3;c++)
		{
			printf("\nelement is == %d %d ",r,c);
			if(r==c)
			{
		     sum=sum + Arr_1[r][c];
	        }
		}
	}
	
	printf("\nadding daigonal of an  Array Is\n");
	
	for(r=0;r<3;r++)//this loop is used for printing matrices
	{
		for (c=0;c<3;c++)
		{
          printf("%d ",Arr_1[r][c]);
          
		}
		printf("\n");
	}
		 printf("\n the sum of th right daigonal value %d ",sum);
}
