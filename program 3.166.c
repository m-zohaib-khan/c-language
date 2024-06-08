// write the program for the gas mileage;
#include<stdio.h>
int main()
{
	int miles_driven;
	float gallons;
	
	float miles_perdriven;
	
	float average;
	int counter=0;
	float total_miles;
	
	
	
	printf("enter the gallons used (-1 to end):");
	scanf("%f",&gallons);
	
	while(gallons!=-1)
	{
	
		
		printf("enter the miles driven: ");
		scanf("%d",&miles_driven);
//		counter++;
		
		miles_perdriven=miles_driven/gallons;
		
		printf("miles per gallons for this tank: %f\n",miles_perdriven);
		
		total_miles=total_miles+miles_perdriven;
	
		
		counter++;
		printf("enter the gallons used (-1 to end):");
	scanf("%f",&gallons);
	}

	
	
	if(counter!=0)
	{
	average=total_miles/counter;
	
	printf("average=%f\n",average);	
	}
	else
	{
		printf("no gallons were entered!\n");
	
	}
	return 0;
	
	
}