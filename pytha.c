#include<stdio.h>
int main()
{
	double a,b,c;
	printf("enter the length of first side (a):");
	scanf("%lf",&a);
	printf("enter the length of second side (b):");
	scanf("%lf",&b);
	c=sqrt(a*a+b*b);
	printf("enter the length of hpoteneus (c )is: %2lf\n",c);
}
