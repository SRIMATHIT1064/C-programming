#include<stdio.h>
 int main()
{
	int a[3][3],b[3][3],c[3][3],r1,c1,r2,c2,i,j;
	printf("enter the rows and cloumns size of matrix1\n");
	scanf("%d%d",&r1,&c1);
	printf("enter the rows and cloumns size of matrix2\n");
	scanf("%d%d",&r2,&c2);
	if(r1==r2&&c1==c2)
	{
		printf("enter the first matrix elements\n");
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					scanf("%d",&a[i][j]);
				}
			}
			printf("enter the second matrix elements\n");
			for(i=0;i<r2;i++)
			{
				for(j=0;j<c2;j++)
				{
				  scanf("%d",&b[i][j]);
				}
			}
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					c[i][j] =a[i][j] - b[i][j];
				}
				
			}
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					printf("%d",c[i][j]);
				}
				printf("\n");
			}
     	}
     	else
     	{
     		printf("matrix addition not possible");
		}
		
	}

