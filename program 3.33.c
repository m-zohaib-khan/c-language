// write the program to print the hollow square of asterisk;
#include<stdio.h>
int main()
{
	int rows;
	printf("enter the number of rows: ");
	scanf("%d",&rows);
	
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=rows;j++)
		{
			if(i==1 ||i==rows||j==1||j==rows)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		
		}
		printf("\n");
	}
}