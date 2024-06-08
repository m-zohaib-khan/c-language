//  write the program to make the salary calculator;
#include<stdio.h>
int main()
{
	float hourly_rate;
	int hours_worked;
	
	float salary;
	
	while(hours_worked!=-1)
	{
		printf("enter # of hours worked (-1 to end):");
		scanf("%d",&hours_worked);
		
		if(hours_worked==-1)
		{
			break;
		}
		printf("enter the hourly rate of the worker ($00.00):");
		scanf("%f",&hourly_rate);
		
		salary=hourly_rate*hours_worked;
		
		printf("salary=$%.2f\n",salary);
		
		
	
	}
	return 0;
}