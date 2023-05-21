#include<stdio.h>
void add(int *a,int *b,int *c)
{
	*c =*a+*b;
}
int main()
{
	int num1,num2,sum;
	int *p1,*p2,*p3;
	printf("enter the first number:");
	scanf("%d",&num1);
	printf("enter the second number:");
	scanf("%d",&num2);
	p1=&num1;
	p2=&num2;
	p3=&sum;
	add(p1,p2,p3);
	printf("the sum of %d and %d is %d\n",num1,num2,sum);
}
