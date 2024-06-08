// write the program to make the credit limit calculator;
#include<stdio.h>
int main()
{
	int account_num=0,count=0;
	float beginning_balance,total_charges,total_credit,credit_limit;
	float new_balance;
	
	
	while(account_num!=-1)
	{
		
	printf("enter the account number (-1 to end):");
	scanf("%d",&account_num);
      
      if(account_num==-1)
      {
      	break;
	  }
    printf("enter the beginning balance of the month: ");
    scanf("%f",&beginning_balance);
      
    printf("enter total of all items charged by this customer this month:");
    scanf("%f",&total_charges);
    
    printf("enter total of all credits applied to this customer's account this month:");
    scanf("%f",&total_credit);
    
    new_balance=beginning_balance+total_charges+total_credit;
    
    printf("new balance of the customer:%f\n",new_balance);
    
    printf("enter the credit limits:");
    scanf("%f",&credit_limit);
    
    if(new_balance>credit_limit)
    {
    	printf("acoount number:%d\n",account_num);
    	printf("credit limit:%f\n",credit_limit);
    	printf("new balance:%f\n",new_balance);
    	printf("credit limits exceed\n");
	}
	}
	
return 0;
}