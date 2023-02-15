/*
	Name:divagar 
	Copyright: 
	Author: pointer
	Date: 07-02-23 09:55
	Description:filehandling 
*/

#include <stdio.h>
#include<stdlib.h>
int main()
{
char empolyee_name[100],empolyer_name[100],location[100];
int empolyee_id;
float empolyee_salary;
char empolyee_lastname;
FILE *fptr;
fptr = fopen("D:\\manfree\\filehandling\\empolyer.txt","w");
if(fptr==NULL)
{
printf("Error!");
exit(1);
}
puts("enter the empolyee name:");
gets(empolyee_name);
printf("Enter empolyee_salaray:");
scanf("%f",&empolyee_salary);
fgetchar();
puts("enter the empolyee_name:");
gets(empolyee_name);
printf("enter the empolyee_id:") ;
scanf("%d",&empolyee_id);
getchar();
puts("enter the office location:  ");
gets(location);
printf("enter the last name:");
scanf("%c",&empolyee_lastname);
fprintf(fptr,"%s\n%f\n%s\n%d\n%s\n%c",empolyee_name,empolyee_salary,empolyee_name,empolyee_id,location,empolyee_lastname);
fclose(fptr);

}
