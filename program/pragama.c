/*
	Name:divagar 
	Copyright: 
	Author: structure
	Date: 02-02-23 14:25
	Description: padding
*/
#include<stdio.h>
#pragma pack()
struct abcde
{
	int a;
	char b;
	float c;
	double d;
	string e;
};
int main()
{
	struct abcde go;
	printf("%d",sizeof go);
}
