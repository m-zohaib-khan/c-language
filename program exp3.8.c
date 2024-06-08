// write the program for the sentinel controled repetition;
#include<stdio.h>
int main()
{
	int total=0,counter=0,grade;
	float average;
	
	
	printf("enter the grade from (-1) to end: ");
	scanf("%d",&grade);
	
	while(grade!=-1)
	{
		total=total+grade;
		
		counter++;
		
	printf("enter the grade from (-1) to end: ");
	scanf("%d",&grade);
		
		
	}
	if(counter!=0)
	{
		average=(float)total/counter;
		printf("average=%.2f\n",average);
		
	}
	else
	{
		printf("no grade were entered!\n");
	}
	return 0;
}