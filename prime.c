#include<stdio.h>
int main()
{
	int n,r,i,flag=0;
	printf(" enter n:\n");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		r=n%i;
		if(r==0)
		flag++;
	}
	if(flag==0)
	printf(" it is a prime number\n",n);
	else
	printf(" it is not a prime number\n",n);
}
