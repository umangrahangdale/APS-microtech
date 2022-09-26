#include<stdio.h>
#define pi 3.1452
int main() 
{
	float radius, circumference;
	printf("\n Enter radius of circle :- ");
	scanf("%f", &radius);
	circumference =2*pi*radius;
	printf("\n circumference of circle is %f",circumference);
	return 0;
}
