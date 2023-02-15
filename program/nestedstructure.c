/*
	Name: divagar
	Copyright: 
	Author: stucure
	Date: 04-02-23 15:4034
	Description: nested
*/
#include<stdio.h>
struct address
{
	char city[23];
	int pincode;
	char phone [14];
};
struct empolyee
{
	char name[40];
	struct address add;
};
int main()
{

struct empolyee emp;
printf("\t\tenter the information");
scanf("%s%s%d%s",&emp.name,&emp.add.city[23],&emp.add.pincode,&emp.add.phone[14]);
printf("printing the information\n");
printf("%s%s%d%s",emp.name,emp.add.city[23],emp.add.pincode,emp.add.phone[14]);
}
