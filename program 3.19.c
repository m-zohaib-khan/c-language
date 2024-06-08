// write the program to make the interest calculator;
#include<stdio.h>
int main()
{
	float interest_rate,principals_loan,interest_charge;
	int days;
	
	while(principals_loan!=-1)
	{
		printf("enter the loan principal (-1 to end):");
		scanf("%f",&principals_loan);
		
		if(principals_loan==-1)
		{
			break;
		}
		printf("enter the interest rate:");
		scanf("%f",&interest_rate);
		
		printf("enter terms of loan in a days:");
		scanf("%d",&days);
		
		interest_charge=principals_loan*interest_rate*days/365;
		
		printf("the interest charge: $%.2f\n",interest_charge);
		
		
	}
	return 0;
}