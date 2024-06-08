#include<stdio.h>
int main()
{
	int num_terms,x=1;
	int i;
	double e=1.0;
	int j;
	double fact=1.0;
	printf("enter the number of terms from the user: ");
	scanf("%d",&num_terms);
	
	for(int i=0;i<num_terms;i++)
	{
		
		{
			printf("%d/%d!+",x,+i);
		}
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		e=e+x/fact;
		
}
			
		
		
	printf("\ne=%.3lf\n",e,x,num_terms);
	return 0;
}
