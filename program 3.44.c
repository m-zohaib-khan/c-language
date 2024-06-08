// write the program to print the sides of a rigth triangle;
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
	
	if(side1*side1==side2*side2+side3*side3)
	{
		printf("the side can form a rigth triangle!\n");
		
	}
	else if(side2*side2==side1*side1+side3*side3)
	{
		printf("the side can form a rigth triangle!\n");
	}
	
	else if(side3*side3==side1*side1+side2*side2)
	{
		printf("the side can form a rigth triangle!\n");
	}
	else
	{
		printf("the side cannot form a rigth triangle!\n");
	}
	return 0;
	
}