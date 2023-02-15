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
char name[50];
int age;
char school[100];
FILE *fptr;
fptr = fopen("natarajan1.txt","r");
if(fptr==NULL)
{
printf("Error!");
exit(1);
}

fscanf(fptr,"%s",&name);

fscanf(fptr,"%d",&age);

//fscanf(fptr,"%c",&school);
fgetc(fptr);
fgets(school,100,fptr);
printf("%s\n",name); //write
printf("%d\n",age);
puts(school);
fclose(fptr);
return 0;
}
