/*
	Name: divagar
	Copyright: 
	Author: 
	Date: 08-02-23 14:35
	Description: 
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,n,i,m;
	printf("enter the number:");
	scanf("%d",&n);
	ptr=(int*)malloc(m*sizeof(int));
	printf("\nmemory successfully allocated:");
	printf("\n address previously allocated:");
	for(i=0;i<n;i++)
	{
		ptr[i]=i+1;
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",ptr[i]);
	}
	printf("\n enter the size:");
	scanf("\n%d",&n);
	
	ptr=realloc(ptr,m*sizeof(int));
	printf("\naddress of newly allocated:");
	for(i=0;i<m;i++)
	{
		ptr[i]=i+1;
	}
	for(i=0;i<m;i++)
	{
		printf("\n%d",ptr[i]);
	}
	free(ptr);
	ptr=NULL;
//	printf("\nNULL after ptris%d",ptr);
	return 0;
}
