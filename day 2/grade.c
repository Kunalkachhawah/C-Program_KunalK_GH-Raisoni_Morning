#include<stdio.h>
void main()
{
	int marks,Phy, Che, Bio, Math, Comp ;
	float per;
	printf("Enter the marks of physics  = ");
	scanf("%d",&Phy);
	printf("Enter the marks of chemistry  = ");
	scanf("%d",&Che);
	printf("Enter the marks of biology  = ");
	scanf("%d",&Bio);
	printf("Enter the marks of maths  = ");
	scanf("%d",&Math);
	printf("Enter the marks of physics  = ");
	scanf("%d",&Comp);
	marks=Phy+Che+Bio+Math+Comp;
	per=(marks*100)/500;
	printf("\n Marks out of 500 == %d",marks);
	printf("\n percentage == %f",per);
	if(per >= 90)
	{ 
		printf("\ngrade A");
	}
	else if(per >= 80)
	{
		printf("\ngrade B");
	}
	else if(per >= 70)
	{
		printf("\ngrade C");
	}
	else if(per >= 60)
	{
		printf("\ngrade D");
	}
	else if(per >= 40)
	{
		printf("\ngrade E");	
	}
	else if(per < 40)
	{
		printf("\ngrade F");
	}
	else
	{
		printf("invalid");
	}
	
	
}
