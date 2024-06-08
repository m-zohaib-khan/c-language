// write the program to check whether the number is prime or not;
#include<stdio.h>
int main()
{
	int number,flag=0,i;
//	int count=0;
	printf("enter the number: ");
	scanf("%d",&number);
	
	for(i=1;i<=number/2;i++)
	{
		if(i%2!=0)
		{
			flag=1;
//			printf("number is prime!\n");
		}
		else
		{
			flag=0;
		}
//	flag++;
	}
		if(flag==1)
		{
		printf("number is prime!\n");	
		}
//		if(flag==0)
        else
		{
			printf("number is not prime!\n");
		}
		if(i==1)
		{
			printf("number is not prime nor composite!\n");
		}
	return 0;
}