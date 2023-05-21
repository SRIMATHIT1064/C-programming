#include<stdio.h>
#include<string.h>
void main()
{   int i;
	char name[20];
	fgets(name,sizeof(name),stdin);
	puts(name);
	i=strlen(name);
	printf("%d",i);
}  
 
