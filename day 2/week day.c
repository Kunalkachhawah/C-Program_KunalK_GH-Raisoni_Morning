#include<stdio.h>
void main(){
	
	int Day_Number;
	
	printf("Enter 1,2,3,4,5,6,7 =");
	scanf("%d",&Day_Number);
	
	switch(Day_Number){
		case 1:
		printf("SUNDAY");
		break;
		
		case 2:
		printf("MONDAY");
		break;
		
		case 3:
		printf("TUESDAY");
		break;
		
		case 4:
		printf("WEDNESDAY");
		break;
		
		case 5:
		printf("THURSDAY");
		break;
		
		case 6:
		printf("FRIDAY");
		break;
		
		case 7:
		printf("SATURDAY");
		break;
		
		default:
			printf("INVALID CHOICE");
			break;
	}
}
