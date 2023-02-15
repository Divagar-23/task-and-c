/*
	Name: divagar
	Copyright: sturcture
	Author: 
	Date: 04-02-23 14:39
	Description: nested
*/
#include<stdio.h>
#pragma pack(1);
struct name
{
	int a;
	char b[50];
	float c;
	double d;

struct address
{
	int q,nn;
	char w[50],mm;
}s1;
}s2;
int main()
{
printf("%d",sizeof(s2));
	printf("\n%d",sizeof (s2.s1));
	printf("\n%d",sizeof(s2.s1.nn));
	printf("\n%d",sizeof(s2.s1.mm));
}

