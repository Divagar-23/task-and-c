/*
	Name:divagar 
	Copyright: 
	Author:file handling 
	Date: 06-02-23 14:25
	Description: pointer
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,a,b;
FILE *fptr;
fptr = fopen("divagar.txt","r");
if(fptr == NULL)
{
printf("Error");
exit(1);
}
printf("Enter num:");
fscanf(fptr,"%d%d%d",&n,&a,&b); 
printf("%d\n%d\n%d",n,a,b); //write
fclose(fptr);
return 0;
}
