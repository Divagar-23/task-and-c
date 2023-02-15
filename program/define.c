/*
	Name: divagar
	Copyright: 
	Author: 
	Date: 13-02-23 11:14
	Description: define
*/
# include <stdio.h>
# define a 10
void main()
{
   #ifdef a
   printf("Hello I am here..");
   #endif
   #ifndef a
   printf(" Not defined ");
   #else
   printf("R u There ");
   #endif
}
