// write the program to print the largest number among ten inputs number;
#include<stdio.h>
int main()
{
     int counter,number,largest1=1,largest2;
	
	for(counter=1;counter<=10;counter++)
	{
		printf("enter the number:");
		scanf("%d",&number);
		
		if(number>largest1)
		{
			largest1=number;
			largest2=number-1;
			
		}
		
	}
	printf("largest number one=%d\n",largest1);
	printf("largest number two=%d\n",largest2);
}
