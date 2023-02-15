/*
	Name: divagar
	Copyright: 
	Author: dma
	Date: 08-02-23 12:03
	Description:malloc 
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,n,i;
	printf("enter the element:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));//dynamically allocte memory  using malloc()
	if(ptr == NULL)
	{
		printf("error");
		exit(1);
	}
	else
	{
	
	printf("memory allocte memory using alloc.\n");
	for(i=0;i<n;i++)
	ptr[i]=i+1;
	 printf("The elements of the array are:"); // Print the elements of the array
      for (i = 0; i < n; ++i)
       printf("%d,", ptr[i]);
	
}
   free(ptr);
   ptr=NULL;
   printf("\n%d",ptr);
   return 0;
}
