// write the program to print the checkerboard pattern of asterisk;
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
			if(i%2!=0)
			{
				printf("* ");
			}
			else
			{
				printf(" *");
			}
		
		}
		printf("\n");
	}
}