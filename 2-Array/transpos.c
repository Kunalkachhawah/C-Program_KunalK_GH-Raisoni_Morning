#include<stdio.h>
void main()
{
	int Arr_1[2][2],r,c;
	
	printf("Enter element of array\n");
	
	for(r=0;r<2;r++) //this loop is used for scanning user value to take input form user 
	{
		for (c=0;c<2;c++)
		{
			scanf("%d",&Arr_1[r][c]);
		}
	}
	
	printf(" before transpos of an  Array Is\n");
	
	for(r=0;r<2;r++)//this loop is used for printing matrices
	{
		for (c=0;c<2;c++)
		{
			printf("%d ",Arr_1[r][c]);
		}
		printf("\n");
	}
	
	printf(" After transpos of an  Array Is\n");
	
	for(r=0;r<2;r++)//this loop is used for printing matrices
	{
		for (c=0;c<3;c++)
		{
          printf("%d ",Arr_1[c][r]);
          
		}
		printf("\n");
	}
		 
}
