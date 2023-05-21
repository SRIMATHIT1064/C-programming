#include<stdio.h>
int main()
{
	int a;
	printf("enter the age of person:");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("eligible for voting");
	}
	else
	{
		printf("not eligible for voting\n");
		printf("has to wait for%d years",18-a);
	}
}
