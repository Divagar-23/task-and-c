/*
	Name:divagar 
	Copyright: 
	Author: all 
	Date: 11-02-23 10:37
	Description: super market 
*/
#include<stdio.h>
int main()
{
	int n,f[5],i,j,kg,total,k;
	total=0;
	printf("Welcome to the our super market\n");
	shopping: 
	printf("\nwhat you want sir?\n 1.Fruits  2.Vegetables  3.Grocery  4.Exit");
	printf("\nEnter the num=");
	scanf("%d",&n);
	if (n==1)
	{
	    int	f[5] ={120,85,60,100,90};
		printf("The available fruits are\n 1.Apple=120  2.Mango=85  3.Guava=60  4.Orange=100  5.Grape=90\n The amounts are per KG");
		printf("\nEnter the fruits\n how many kg you want=");
		scanf("%d%d",&n,&kg);
        n=n-1;
        total=(f[n]*kg)+total;
		printf("\nyour amount is =%d\n press 1 confrm you order\n press 0 skip my order",total);
		scanf("%d",&k);
		if (k==1)
		{
		    printf("\nyour amount is=%d",total);
	    }
	    else
	    {
	    	total=total-(f[n]*kg);
	    	printf("your amount is =%d",total);
	      goto shopping;	
		}
		//system("cls");
		 goto shopping;
	}	
    if (n==2)
	{
		int v[5] ={60,110,50,30,40};
		printf("\nThe available vegtables are\n 1.Tomato=60  2.Onion=110  3.Potato=50  4.lady finger=30  5.brinjal=40");
		printf("\nEnter the vegetable\n how many kg you want=");
		scanf("%d%d",&n,&kg);
		n=n-1;
		total=(v[n]*kg)+total;
		printf("\nyour amount is =%d\n press 1 confrm you order\n press 0 skip my order",total);
		scanf("%d",&k);
		if (k==1)
		{
		printf("\nyour amount is=%d",total);
	    }
	    else
	    {
	    	total=total-(v[n]*kg);
	    	printf("\n your amount is=%d",total);
	      goto shopping;	
		}
		//system("cls");
		 goto shopping;
	}
    if (n==3)
	{
		int g[5] ={65,25,40,100,6,};
		printf("\nThe available grocery are\n 1.Rice=65  2.Milk=25  3.Sugar=40  4.Tamarind=100  5.Egg=6");
		printf("\nEnter the grocery\n Enter qty=");
		scanf("%d%d",&n,&kg);
		n=n-1;
		total=(g[n]*kg)+total;
		printf("\nyour amount is =%d\n press 1 confrm you order\n press 0 skip my order",total);
		scanf("%d",&k);
		if (k==1)
		{
		printf("\nyour amount is=%d",total);
	    }
	    	else
	    {
	    	total=total-(g[n]*kg);
	    	printf("\n your amount is=%d",total);
	      goto shopping;	
		}
	      goto shopping;	
		//system("cls");	
	}
    if (n==4)
	{
		printf("\nYour amount is =%d\n",total);
		printf("\nThank for coming\n Visit again");
	}
}

