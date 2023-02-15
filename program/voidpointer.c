/*
	Name: divagar
	Copyright: 
	Author: void
	Date: 03-02-23 15:09
	Description: pointer
*/
#include<stdio.h>
void * pointer  ;
int main()
{
	void *p;
	int a=23;
	char b='d';
	float c=1.999;
	p=&a;
	printf("%d\n",*(int*)p);
	p=&b;
	printf("%c\n",*(char*)p);
	p=&c;
	printf("%f\n",*(float*)p);
}
