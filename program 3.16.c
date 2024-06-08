// write the program for the gas mileage;
#include<stdio.h>
int main()
{
	int miles_driven;
	float gallons;
	
	float miles_perdriven;
	
	float average;
	int counter=0;
	
	
	printf("enter the gallons used (-1 to end):");
	scanf("%f",&gallons);
	
	while(gallons!=-1)
	{
		
		printf("enter the gallons used (-1 to end):");
		scanf("%f",&gallons);
		
		printf("enter the miles driven: ");
		scanf("%d",&miles_driven);
		
		miles_perdriven=miles_driven/gallons;
		
		counter++;
	}
	if(counter!=0)
	{
	average=miles_perdriven/counter;
	
	printf("average=%f\n",average);	
	}
	else
	{
		printf("no gallons were entered!\n");
	
	}
	return 0;
	
	
}