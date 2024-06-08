// write the program for the nested control statement;
#include<stdio.h>
int main()
{
	int pass=0;
	int fail=0;
	int student=1;
	int result;
	
	
	while(student<=10)
	{
		printf("enter the result (1=pass,2=fail):");
		scanf("%d",&result);
		
		if(result==1)
		{
			pass++;
	   }
	   else
	   {
	   	fail++;
	   }
	   student++;
	}
	printf("passed=%d\n",pass);
	printf("failed=%d\n",fail);
	
	if(pass>8)
	{
		printf("bonus to instructor is given!\n");
	}
	return 0;
}