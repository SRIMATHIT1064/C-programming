#include<stdio.h>
int main()
{
	int i,n,odd_sum=0,eve_sum=0;
	printf("enter the value of n \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%2==0)
		eve_sum=eve_sum+i;
		
     	else
	       odd_sum=odd_sum+i;
	}
	  	printf("\n sum of all even numbers=%d\n",eve_sum);
	  	printf("\n sum of all odd numbers=%d\n",odd_sum);
}

