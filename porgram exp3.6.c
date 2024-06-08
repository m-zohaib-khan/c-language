// write the program for the while repetition statement using counter controled repetition;
#include<stdio.h>
int main()
{
	int total=0,counter=1,average,grade;
	
	while(counter<=10)
	{
		printf("enter the grade: ");
		scanf("%d",&grade);
		
		total+=grade;
		
		counter++;
		
	}
	average=total/10;
	
	printf("average=%d\n",average);
	
	return 0;
}