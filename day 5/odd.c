#include<stdio.h>
void main()
{
	int i=1,num,sum=0,odd;
	printf("\nEnter A Number == ");
	scanf("%d",&num);
	
	while(i<=num)
	{
		
	  if(i%2==1)
	  {
	  	  printf("\n%d",i);
	  	  sum=sum+i;
	  	 
	  }
	  i++;
			
	}
	
	printf("\n%d",sum);

}
