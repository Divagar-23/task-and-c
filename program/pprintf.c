/*
	Name:divagar 
	Copyright: 
	Author: 
	Date: 07-02-23 12:44
	Description: pprintf
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	char natara[23]="divagar";
	int age=24;
	float salary=2.56;
	char last ='d';
	sprintf(name,"%s " "%d " "%f " " %c",natara,age,salary,last);
	printf("%s",name);
	}
