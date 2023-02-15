/*
	Name: divagar 
	Copyright: 
	Author: 
	Date: 02-02-23 10:14
	Description: 
*/
#include<stdio.h>
struct institute
{
	char staff_name;
	int staff_age;
	float staff_height;
	double staff_weight;
	
}
manfree;
void main()
{
	manfree.staff_name='divagar';
	manfree.staff_age=23;
	manfree.staff_height=5.8;
	manfree.staff_weight=63.678;
	printf("staff name is  %c \n",manfree.staff_name );
	printf("staff age is %d\n",manfree. staff_age);
	printf("\n the size of manfree%d",sizeof(manfree));
	printf("\nstaff height is %f",manfree.staff_height);
	printf("\n the size of height %d",sizeof(manfree));
	printf("\n the staff double%lf",manfree.staff_weight);
	printf("\n the size of manfree%d",sizeof(manfree));
//	printf("\n size of institute %d",sizeof(institue));
}
