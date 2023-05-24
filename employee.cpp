#include<stdio.h>
struct details
{
char name[20];
int id;
int sal;
}a[10];
int main()
{
	int i,n;
	int max=0;
	printf("No of employee details to be entered:");
	scanf("%d",&n);
    printf("\n-------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the ID no:");
		scanf("%d",&a[i].id);
		printf("Enter the name:");
		scanf("%s",a[i].name);
		printf("Enter The salary:");
		scanf("%d",&a[i].sal);
		printf("\n-----------------------------------------------\n");
	}
	    for(int k=0;k<n;k++)
		{
        if (a[k].sal>max)
        {
        	max=a[k].sal;
		}
	}
	for(int j=0;j<n;j++)
	{	
		if (a[j].sal==max)
		{
		    printf("       -:The employee with maximum salary:-      ");
		    printf("\n--------------------------------------------------\n");
		    printf("\nemployee name:%s\n\nemloyee ID:%d\n\nSalary amount:%d",a[j].name,a[j].id,a[j].sal);
	    }
	}

}