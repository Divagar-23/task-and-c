/*
	Name: divagar
	Copyright: 
	Author: sturcture
	Date: 02-02-23 11:54
	Description: multiple line
*/
#include<stdio.h>
struct details
{
	char name;
	char subject;

}divagar,gobi;
int main()
{
	scanf("%c %c",&divagar.name,&divagar.subject);
	printf("%c %c",divagar.name,divagar.subject);
	scanf("\n%c %c",&gobi.name,&gobi.subject);
	printf("\n%c %c\n",gobi.name,gobi.subject);
}
