#include<stdio.h>
int main()
{
	int rows=10;
	int columns;
	
	while(rows>=1)
	{
		columns=1;
		
		while(columns<=10)
		{
			printf("%s",rows%2?"<":">");
			++columns;
		}
		--rows;
		printf("\n");
	}
	return 0;
}