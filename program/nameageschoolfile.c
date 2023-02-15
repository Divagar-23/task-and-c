/*
	Name: divagar
	Copyright: 
	Author: file handling
	Date: 06-02-23 12:22
	Description: pointer
*/

#include <stdio.h>
int main()
{
char name[22];
int age;
char school[100];
FILE *fptr;
fptr = fopen("program1.txt","w");
if(fptr==NULL)
{
printf("Error!");
exit(1);
}
printf("Enter name:");
scanf("%s",&name);
printf("enter the age:") ;
scanf("%d",&age);
printf("enter the school:");
//scanf("%s",&school);
getchar();
gets(school);
fprintf(fptr,"%s\n",name); //write
fprintf(fptr,"%d\n",age);
fprintf(fptr,"%s\n",school);
fclose(fptr);
return 0;
}
