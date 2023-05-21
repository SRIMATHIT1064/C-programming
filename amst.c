#include<stdio.h>
#include<math.h>
int main()
{
	int num,original_num,remainder,result=0,n=0,power;
	printf("enter positive integer");
	scanf("%d",&num);
	original_num=num;
	while(original_num!=0)
	{
		original_num/=10;
		++n;
	}
	original_num=num;
	while(original_num!=0)
	{
		remainder=original_num%10;
		power=round(pow(remainder,n));
		result+=power;
		original_num/=10;
	}
	if(result==num)
	{
		printf("%d is a amstrong number\n",num);
	}
	else
	{
		printf("%d is not an amstrong number\n",num);
	}
}
