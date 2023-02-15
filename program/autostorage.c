/*
	Name: divaagr
	Copyright: 
	Author: storage memory
	Date: 09-02-23 15:21
	Description: auto
*/
#include <stdio.h> 
int main( )
{
auto int j = 1;
 {
 auto int j= 2;
 {
 auto int j = 3;
 printf ( " %d ", j);
 }
 printf ( "\t %d ",j);
 }
printf( "%d\n", j);
}

