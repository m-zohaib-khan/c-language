// write the program for the palindrome tester;
#include<stdio.h>
int main()
{
	int num,original_num,sum=0,rem;
	
	printf("enter the five digits number: ");
	scanf("%d",&num);
	
	original_num=num;
	
	while(num>0)
	{
		rem=num%10;
		
		sum=rem+(sum*10);
		
		num=num/10;
		
	}
	if(original_num==sum)
	{
		printf("the number is palindrome!\n");
	}
	else
	{
		printf("the number is not palindrome!\n");
	}
	
	return 0;
}