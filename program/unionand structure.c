/*
	Name: divagar
	Copyright:structure  
	Author: 
	Date: 02-02-23 11:32
	Description: unoin
*/
#include<stdio.h>
struct divagar
{
	int student_age;
	int student_height;
};
void main()
{
	struct divagar go;
	printf("enter the age and height:");
	scanf("%d %d\n",&go.student_age,&go.student_height); 
	printf("%d %d\n",go.student_age,go.student_height);
}

