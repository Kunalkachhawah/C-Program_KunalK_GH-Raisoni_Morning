#include<stdio.h>
void main()
{
	int Arr_1[2][2],Arr_2[2][2],RArr[2][2],r,c;
	
	printf("Enter element of fisrt array\n");
	
	for(r=0;r<2;r++) //this loop is used for scanning user value to take input form user 
	{
		for (c=0;c<2;c++)
		{
			scanf("%d",&Arr_1[r][c]);
		}
	}
	printf("Enter element of Second array\n");
		
	for(r=0;r<2;r++)//this loop is used for scanning user value to take input form user
	{
		for (c=0;c<2;c++)
		{
			scanf("%d",&Arr_2[r][c]);
		}
	}
	
	for(r=0;r<2;r++)//this loop is used for Adding matrices
	{
		for (c=0;c<2;c++)
		{
		  RArr[r][c]=Arr_1[r][c] + Arr_2[r][c];
		}
	}
	
	printf("Adition of two a Array Is\n");
	
	for(r=0;r<2;r++)//this loop is used for printing matrices
	{
		for (c=0;c<2;c++)
		{
          printf("%d ",RArr[r][c]);
		}
		printf("\n");
	}
}
