/*
	Name: divagar
	Copyright: 
	Author: scanf 
	Date: 08-02-23 10:19
	Description:txt,format,memory 
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	char location[100];
	char username[100];
	char format[100];
	char find[30];
	printf("enter the location:");
	gets(location);
	printf("enter username:");
	gets(username);
	printf("enter the format:");
	gets(format);
	sprintf(find,"%s %s %s",location,username,format);
	printf("%s",find);
	FILE*fptr;
	fptr=fopen(find,"w");
	if(fptr==NULL)
	{
		printf("error");
		exit(1);
	}
	printf("enter the name:");
	scanf("%s",&name);
	fprintf(fptr,"%s",name);
	
}
