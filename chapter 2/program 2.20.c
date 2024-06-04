// write the program to print the diameter,circumference, and area of a circle;
#include<stdio.h>
int main()
{
	float radius;
	float constant=3.14;
	
//	float diameter,circum,area;
	
	printf("enter the radius:");
	scanf("%f",&radius);
	
	float diameter=(float)2*radius;
	
	float circum=2*3.14*(float)radius;
	
	float area=(3.14)*(3.14)*(float)radius;
	
	printf("diamter=%.2f\n",diameter);
	
	printf("circumference=%.2f\n",circum);
	
	printf("area=%.2f\n",area);
	
	return 0;
}