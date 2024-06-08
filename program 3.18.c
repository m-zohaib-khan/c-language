//  write the program to make the sales commission calculator;
#include<stdio.h>
int main()
{
	float salary,sales_dollars;
	
	while(sales_dollars!=-1)
	{
		printf("enter the sales in dollars (-1 to end):");
		scanf("%f",&sales_dollars);
		
		if(sales_dollars==-1)
		{
			break;
		}
		salary=sales_dollars*9/100+200;
		
		printf("salary is: $%.2f\n",salary);
		
	}
	return 0;
}