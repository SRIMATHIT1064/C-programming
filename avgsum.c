#include<stdio.h>
int main()
{
	int a[50],n,i,sum=0;
	float avg;
	printf("total number of elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	     sum=sum+a[i];
	     	avg=sum/n;
	 {
	 	printf("\n the sum is %d",sum);
	 	printf("\n the average is %f",avg);
	 }
}
