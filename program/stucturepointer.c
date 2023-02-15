/*
	Name: divagar
	Copyright:sturcture 
	Author: 
	Date: 03-02-23 14:26
	Description: pointer
*/
#include<stdio.h>
struct abc
{
	int a;
	char b;
	float c;	
}s1={23,'d',2.34};
int main()
{
//	struct abc s1={23,'d',2.78};
	struct abc*p=&s1;
//	printf("\n%d %c%f\n",p->a,p->b,p->c);
printf("%d \n%c\n%f",(*p).a,(*p).b,(*p).c);
}
