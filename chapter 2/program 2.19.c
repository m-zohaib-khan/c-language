// write the program to print the sum,product,average,smallest,largest numbers;
#include<stdio.h>
int main()
{
	int num1,num2,num3,sum=0,product=0;
	float average=0;
	
	printf("enter the first number:");
	scanf("%d",&num1);
	
	printf("enter the second number:");
	scanf("%d",&num2);
	
	printf("enter the third number:");
	scanf("%d",&num3);
	
	sum=num1+num2+num3;
	
	product=num1*num2*num3;
	
	average=(float)sum/3;
	
	printf("sum=%d\n",sum);
	printf("product=%d\n",product);
	printf("average=%.2f\n",average);
	
//	for the largest number;
	if(num1>num2 && num1>num3)
	{
		printf("largest number=%d\n",num1);
	}
	
	if(num2>num1 && num2>num3)
	{
		printf("largest number=%d\n",num2);
	}
	
	if(num3>num1 && num3>num2)
	{
		printf("largest number=%d\n",num3);
	}
	
//	for the smallest number;
	if(num1<num2 && num1<num3)
	{
		printf("smallest number=%d\n",num1);
	}
	
	if(num2<num1 && num2<num3)
	{
		printf("smallest number=%d\n",num2);
	}
	
	if(num3<num1 && num3<num2)
	{
		printf("smallest number=%d\n",num3);
	}
	
	return 0;
}