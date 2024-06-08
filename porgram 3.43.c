// write the program to print the sides of the trianle;
#include<stdio.h>
int main()
{
	int side1,side2,side3;
	
	printf("enter the first side:");
	scanf("%d",&side1);
	
	printf("enter the first side:");
	scanf("%d",&side2);
	
	printf("enter the first side:");
	scanf("%d",&side3);
	
	if(side1+side2>side3 && side2+side3>side1 && side1+side3>side2)
	{
		printf("the side can form a triangle!\n");
		
	}
	else
	{
		printf("the side cannot form a triangle!\n");
	}
	return 0;
	
}