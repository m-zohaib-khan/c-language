// write the program to print the factorial;
#include<stdio.h>
int main()
{
	int number,fact=1;
	int count=0;
	
	printf("enter the number: ");
	scanf("%d",&number);
		
	for(int i=number;i>=1;i--)
	{
		fact=fact*i;
		
	}
	printf("%d!=%d\n",number,fact);
	
	return 0;
}