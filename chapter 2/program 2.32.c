// write the program to create a bmi calculator application;
#include<stdio.h>
int main()
{
	float weigth;
	float heigth;
	float bmi;
	
	
	printf("enter the weigth of the user:");
	scanf("%f",&weigth);
	
	printf("enter the heigth of the user:");
	scanf("%f",&heigth);
	
	bmi=weigth/(heigth*heigth);
	
	printf("BMI value:");
	if(bmi<18.5)
	{
		printf("the person is underweigth!\n");
	}
	if(bmi>=18.5 && bmi<=24.9)
	{
		printf("the person is normal!\n");
		
	}
	if(bmi>=25 && bmi<=29.9)
	{
		printf("the person is overweigth!\n");
		
	}
	if(bmi>=30)
	{
		printf("the person is obese!\n");
	}
	return 0;
	
	
}