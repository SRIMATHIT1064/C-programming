#include<stdio.h>
int main()
{
	int rows,i,j,number=1;
	printf("enter the number of rows:");
	scanf("%d",&rows);
	for(i=0;i<=rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",number);
			++number;
		}
		printf("\n");
	}
}
