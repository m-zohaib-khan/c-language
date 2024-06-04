// write the program input five digit number from the user;
#include<stdio.h>
int main()
{
//	int num=0;
//	
//	printf("enter the five digit number from the user:");
//	scanf("%d",&num);
//	
//	int digit=num/10000;
//	
//	printf("%d  ",digit);
//	
//	int weigth=digit*10000;
//	int new=num-weigth;
//	digit=new/1000;
//	
//	printf("%d  ",digit);
//	
//	weigth=digit*1000;
//	new=new-weigth;
//	digit=new/100;
//	
//	printf("%d  ",digit);
//	
//	weigth=digit*100;
//	new=new-weigth;
//	digit=new/10;
//	
//	printf("%d  ",digit);
//	
//	weigth=digit*10;
//	new=new-weigth;
//	digit=new/1;
//	
//	printf("%d",digit);
	
	
//	reverse of the input number;

   int num=0,i=0,digit;
   
   int first_digit,second_digit,third_digit,fourth_digit,fifth_digit;
   
   printf("enter the five digit number: ");
   scanf("%d",&num);
   
   for(i=0;i<5;i++)
   {
   	int digit=num%10;
   	num=num/10;
   	
   	switch(i)
   	{
   		case 0: 
		   first_digit=digit;
   		break;
   		
   		case 1:
   			second_digit=digit;
   			break;
   			case 2:
   				third_digit=digit;
   				break;
   				case 3:
   					fourth_digit=digit;
   					break;
   					case 4:
   						fifth_digit=digit;
   						break;
   						
   			
	   }
	   
	   
   }
	printf("five digit number:%d %d %d %d %d",first_digit,second_digit,third_digit,fourth_digit,fifth_digit);
	return 0;
}