#include<stdio.h>
int main()
{
	int date,month,year;
	printf("enter the year in DD/MM/YYYY format");
	scanf("%d%d%d",&date,&month,&year);
	if(year%400==0)
	{
		printf("%d%d%d is a leap year",date,month,year);
	}
	else if(year%100==0)
	{
		printf("%d%d%d is a leap year",date,month,year);
	}
	else
	{
		printf("%d%d%d is not a leap year",date,month,year);
	}
}
