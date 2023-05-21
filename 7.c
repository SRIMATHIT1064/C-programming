#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,rows,k;
	printf("enter a number to define the rows");
	scanf("%d",&rows);
	printf("\n");
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			printf(" ");
		}
		for(k=i;k<=i;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}
