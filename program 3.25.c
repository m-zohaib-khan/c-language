// write the program for tabular output;
#include<stdio.h>
int main()
{
	printf("A\tA+3\tA+6\tA+9\n");
	printf("***************************\n\n");
	for(int a=7;a<=35;a=a+7)
	{
		printf("%d\t%d\t%d\t%d\n",a,a+3,a+6,a+9);
		
	}
	return 0;
}