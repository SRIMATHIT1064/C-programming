#include<stdio.h>
int main()
{
	char c;
	int uppercase,lowercase;
	scanf("%c",c);
	uppercase=(c=='A'|c=='E'|c=='I'|c=='O'|c=='U');
	lowercase=(c=='a'|c=='e'|c=='i'|c=='o'|c=='u');
	if(lowercase||uppercase)
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
}
