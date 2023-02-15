/*
	Name:divagar 
	Copyright: string
	Author: function
	Date: 01-02-23 14:54
	Description: pointer
*/
#include<stdio.h>
char diva(char[]);
int main()
{
   char s[100];
   printf("enter the strings");
   gets(s);
   char (*ptr) (char[]);
   ptr=diva;
   ptr(s);
}
char diva(char a[])
{
	printf("the strings %s",a);
}
