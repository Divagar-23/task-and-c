/*
	Name: divagar
	Copyright: 
	Author: 
	Date: 07-02-23 12:21
	Description: sscanfand sprintf
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int id=27;
	char name[100]="divagar 27 34.3 k";
	float null;
	char empolyee[100];
	char  lastname;
	sscanf(name,"%s %d %f %c",&empolyee,&id,&null,&lastname);
	printf("%s\n",empolyee);
	printf("%d\n",id);
	printf("%f\n",null);
	printf("%c",lastname);
	
	

}
