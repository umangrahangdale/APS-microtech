#include<stdio.h>
void main()
{
	int a,b,c, result;
	printf("Enter value of a and b for (a^2+b^2+c^2) :-");
	scanf("%d%d%d",&a,&b,&c);
	result = ((a+b+c)*(a+b+c)-(2*(a*b+b*c+c*a)));
	printf("result of eq. is %d",result);
	return 0;
}
