// write the program to print car-pool savings calculator.
#include<stdio.h>
int main()
{
	int total_miles,cost_pergallon,average_pergallon,parking_fees,tolls_perday;
	
	printf("enter the total miles driven per day: ");
	scanf("%d",&total_miles);
	
	printf("enter the cost per gallon of gasolines: ");
	scanf("%d",&cost_pergallon);
	
	average_pergallon=total_miles*5;
//	here five(5) represent the cost per liter;

   printf("average miles per gallon:%d\n",average_pergallon);
   
   printf("enter the parking fees of the car per day: ");
   scanf("%d",&parking_fees);
   
   tolls_perday=average_pergallon+parking_fees;
   
   printf("tolls per days of the car:%d\n",tolls_perday);
   return 0;
}