/*
	Name:divagar 
	Copyright: 
	Author: w++
	Date: 06-02-23 15:27
	Description: filehanding
*/
	

#include <stdio.h>
int main()
{
char name[50];
int age;
char school[100];
FILE *fptr;
fptr = fopen("diva.txt","w+");
if(fptr==NULL)
{
printf("Error!");
exit(1);
}

//scanf(fptr,"%s",&name);
gets(name);
scanf("%d",&age);
puts(name);
printf("%d",age);
//fscanf(fptr,"%c",&school);
fgetc(fptr);
/*fgets(school,100,fptr);
printf("%s\n",name); //write
printf("%d\n",age);
puts(school);*/
fclose(fptr);
return 0;
}
