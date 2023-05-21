#include<stdio.h>
int main()
{
	int a[50],n,i;
	float avg,sum=0.0;
	printf("total number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the elements:\n");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	 avg=sum/n;
	 printf("the sum is:%d \n",sum);
	 printf("\n");
	 printf("the average is:%2f",avg);
}
