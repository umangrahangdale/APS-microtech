#include<stdio.h>
void main()
{
	int a,b,c, result;
	printf("Enter value of a and b for (2*(a*b+b*c+c*a)) :-");
	scanf("%d%d%d",&a,&b,&c);
	result = ((a+b+c)*(a+b+c)-(a*a+b*b+c*c));
	printf("result of eq. is %d",result);
	return 0;
}
