/*
	Name:divagar 
	Copyright: 
	Author: union
	Date: 04-02-23 14:06
	Description: pointer
*/
#include<stdio.h>
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
	union str *ptr=&divagar;
	scanf("%d",&divagar.a);
	scanf("%s",&divagar.b);
	scanf("%f",&divagar.c);
	scanf("%lf",&divagar.d);
	printf("\n%d",ptr->a);
	printf("\n%s",ptr->b);
	printf("\n%f",ptr->c);
	printf("\n%lf",ptr->d);
}
