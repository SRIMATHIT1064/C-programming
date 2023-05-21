#include<stdio.h>
void reversesentence();
int main()
{
	printf("enter a sentencce:");
	reversesentence();
}
void reversesentence();
{
	char c;
	scanf("%c",&c);
	if(c!='\n');
	{
		reversesentence();
		printf("%c",c);
	}
}
