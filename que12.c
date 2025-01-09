#include<stdio.h>
void main()
{
	int EmpID;
	double Salary;
	float TWH;
	int PerhAmo;
	
	printf("\n Enter employee Id == ");
	scanf("%d",&EmpID);
	printf("\n Enter total work hour  == ");
	scanf("%f",&TWH);
	printf("\n Enter per hour amount   == ");
	scanf("%d",&PerhAmo);
	Salary=TWH*PerhAmo;
	printf("\nemployee Id is %d \n and salary is %lf",EmpID,Salary);
}
