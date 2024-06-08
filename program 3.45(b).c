// write the program that compute the value of e power x;
#include<stdio.h>
int main()
{
	int num_terms,x=1,fact=1,sum=0;
	
	printf("enter the number of terms from the user: ");
	scanf("%d",&num_terms);
	
	for(int i=0;i<=num_terms;i++)
	{
		if(i==num_terms)
		{
			printf("%d/%d!",x,i);
		}
		else
		{
			printf("%d/%d!+",x,+i);
		}
		
		for(int i=num_terms;i>=1;i--)
		{
			fact=fact*i;
		}
		
		sum=sum+x/fact;
			
	}
}