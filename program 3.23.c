// write the program to print the largest number among ten inputs number;
#include<stdio.h>
int main()
{
	int counter,number,largest=1;
	
	for(counter=1;counter<=10;counter++)
	{
		printf("enter the number:");
		scanf("%d",&number);
		
		if(number>largest)
		{
			largest=number;
			
		}
	}
	printf("largest number=%d\n",largest);
}