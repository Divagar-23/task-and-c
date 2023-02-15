/*
	Name:divagar 
	Copyright: double
	Author: pointer
	Date: 01-02-23 12:42
	Description: function
*/
#include<stdio.h>
int main()
{
	int a=19;
	int *p1,**p2,***p3;
	p1=&a;
	p2=&p1;
	p3=&p2;
	printf("\n the value  a is%d",a);
	printf("\n the address a is%d",*(&a));
	printf("\n the value p1 is %d",*p1);
	printf("\n the addres p1 is %d",*p1);
	printf("\n the value p2 is %d",*(*p2));
	printf("\n the address p2 is %d",*(*p2));
	printf("\n the value p3 is %d",*(*(*p3)));
	printf("\n the addres p3 is %d",*(*(*p3)));
	
	
}
