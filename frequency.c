#include<stdio.h>
#include<string.h>
int main()
{
	char name1[50],search;
	int i,count=0;
	fgets(name1,sizeof(name1),stdin);
	scanf("%c",&search);
	for(i=0;name1[i]!=0;i++)
	{
		if(search==name1[i])
		{
			count++;
		}
		
	}printf("%d",count);
}
