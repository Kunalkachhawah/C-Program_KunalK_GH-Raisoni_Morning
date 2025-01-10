#include<stdio.h>
void main(){
	
	int Month_Number;
	
	printf("Enter 1,2,3,4,5,6,7,8,9,10,11,12 =");
	scanf("%d",&Month_Number);
	
	switch(Month_Number){
		case 1:
		printf("January 31 Days");
		break;
		
		case 2:
		printf("February 28 Days");
		break;
		
		case 3:
		printf("March 31 Days");
		break;
		
		case 4:
		printf("April 30 Days");
		break;
		
		case 5:
		printf("May 31 Days");
		break;
		
		case 6:
		printf("June 30 Days");
		break;
		
		case 7:
		printf("july 31 Days");
		break;
		
		case 8:
		printf("August 31 Days");
		break;
		
		case 9:
		printf("Septembar 30 Days");
		break;
		
		case 10:
		printf("October  31 Days");
		break;
		
		case 11:
		printf("Novembar 30 Days");
		break;
		
		case 12:
		printf("Decembar 31 Days");
		break;
		
		default:
			printf("INVALID CHOICE");
			break;
	}
}
