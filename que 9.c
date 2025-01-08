#include<stdio.h>
void main()
{
	int NumofDays,Year,Weeks,Days,Rdays;
    printf("\nEnters No of Days =");
    scanf("%d",&NumofDays);
     
    Year=NumofDays/365;
    Rdays=NumofDays%365;
    Weeks=Rdays/7;
    Days=Rdays%7;
	printf("Remaining Days is %d \nYEAR is %d  \nWEEKS is %d\nDAYS are %d",Rdays,Year,Weeks,Days);
	
}
