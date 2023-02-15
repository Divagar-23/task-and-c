/*
	Name: divagar
	Copyright: 
	Author: structure
	Date: 02-02-23 14:57
	Description:union 
*/
#include<stdio.h>
#pragma pack()
 union str
{
	int a;
	char b[50];
	float c;
	double d;
	
} ;
int main () 
{
	union str divagar;
	scanf("%d",&divagar.a);
	scanf("%s",&divagar.b);
	scanf("%f",&divagar.c);
	scanf("%lf",&divagar.d);
	printf("\n%d",divagar.a);
	printf("\n%s",divagar.b);
	printf("\n%f",divagar.c);
	printf("\n%lf",divagar.d);
}
