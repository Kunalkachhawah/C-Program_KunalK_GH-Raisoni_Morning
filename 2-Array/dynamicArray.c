#include<stdio.h>
void main()
{
	int Arr[3][3],r,c;
	
	printf("enter element in an array\n::");
	
	for(r=0;r<3;r++)
	{
		for (c=0;c<3;c++)
		{
			scanf("%d",&Arr[r][c]);
		}
	}
	printf("Entered Array Is\n");
	
	for(r=0;r<3;r++)
	{
		for (c=0;c<3;c++)
		{
			printf("%d ",Arr[r][c]);
		}
		printf("\n");
	}
}
