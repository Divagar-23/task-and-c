/*
	Name: divagar
	Copyright: 
	Author: stu
	Date: 04-02-23 10:08
	Description: pointer
*/
#include<stdio.h>
struct office
{
//	int i;
	char name[50];
	int id;
	float salary;
	int experience;
};
int main()
{
	//int i;
	struct office empolyee[50];
	printf("\t\t\t\tenter the staff deatails\t\t:");
	struct office *ptr=&empolyee;
	int i;
	for(i=0;i<2;i++)
	{
		printf("\nthe empolyee name:");
		scanf("%s",&empolyee[i].name);
		printf("the empolyee id:");
		scanf("%d",&empolyee[i].id);
		printf("the empolyee salary:");
		scanf("%f",&empolyee[i].salary);
		printf("the empolyeee experience:");
		scanf("%d",&empolyee[i].experience);
	}
	for(i=0;i<2;i++,ptr++)
	{
		printf("\n the staff nameis %s",ptr->name);
		printf("\n the staff id is %d",ptr->id);
		printf("\n the staff salary is %f",ptr->salary);
		printf("\n the staff experience is %d",ptr->experience);
	}
	
}
