/*
	Name: divagar
	Copyright: 
	Author: file
	Date: 06-02-23 11:57
	Description: handling
*/
#include <stdio.h>
int main()
{
int n,a,b;
FILE *fptr;
fptr = fopen("program.txt.txt","w");
if(fptr == NULL)
{
printf("Error!");
exit(1);
}
printf("Enter num:");
scanf("%d%d%d",&n,&a,&b); 
fprintf(fptr,"%d\n%d\n%d",n,a,b); //write
fclose(fptr);
return 0;
}
