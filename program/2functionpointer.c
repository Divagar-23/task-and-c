/*
	Name: divagar
	Copyright: pointer
	Author: 
	Date: 01-02-23 14:21
	Description: function
*/
#include<stdio.h>
int mul(int,int);
int sub(int,int);
int add(int,int);
int div(int,int);
int mode(int,int);
int main()
{
	int a,b;
	int (*funmul[5])(int,int)={&mul,&add,&sub,&div,&mode};
	printf("enter the values of a and b:");
	scanf("\n%d\n%d",&a,&b);
	printf("\nmul%d",funmul[0](a,b));
	printf("\nadd%d",funmul[1](a,b));
	printf("\nsub%d",funmul[2](a,b));
	printf("\ndiv%d",funmul[3](a,b));
	printf("\nmode%d",funmul[4](a,b));
}
int mul(int x,int y)
{
	return x*y;
}
int add (int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int div(int x,int y)
{
	return x/y;
}
int mode(int x,int y)
{
	return x%y;
}
