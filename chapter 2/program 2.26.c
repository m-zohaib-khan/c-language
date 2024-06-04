// write the program to print the multiples of three integers;
#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("enter the first number:");
	scanf("%d",&num1);
	
	printf("enter the second number:");
	scanf("%d",&num2);
	
	if(num1 % num2==0)
	{
		printf("first number is multiple of second number!\n");
	}
	if(num1 % num2!=0)
	{
		printf("first number is not the multiple of second!\n");
	}
	return 0;
	
	
}