#include<stdio.h>
int main()
{
	int n,out,in,a=64;
	printf("enter n");
	scanf("%d",&n);
	for(out=1;out<=n;out++)
	{
		for(in=1;in<=out;in++)
		{
			a++;
			printf("%c",a);
		}
		printf("\n");
	}
}
