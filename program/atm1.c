/*
	Name: divagar
	Copyright: 
	Author: all progrm
	Date: 11-02-23 10:42
	Description: atm
*/
#include<stdio.h>
#include <stdlib.h>
//#include <windows.h>
void AccountMenu( char *typeBal);
void ShowBalance( double currBal);
void DepositMoney( double *currBal);
void WithdrawMoney( double *currBal);
void Repeat(char *doAgain);
//void return(char *exit);
void mainMenu(int *choice)
//system("color 0A");
 {
 	system("color 5f");
printf("Please choose from the following menu:1.DEPOSIT ..........\n 2.WITHDRAWAL.......\n 3.ACCOUNT BALANCE...\n 4.PIN CHANGE........\n 5.EXIT");// first select (2) forWITHDRAWAL\nThen (1) for DEPOSIT\n\nYour selection: ");
scanf("%d", choice);
}
/*Displays the types of account they would like to access and sets the
value of the chosen account type*/
void AccountMenu( char *typeAccat)
 {
	system("color 4A");
 printf("Type of account\nChoose C for Current\nChoose S for Savings\nChoose R for Credit\n");
scanf("%s",typeAccat);
printf("\n");

}
//Prompts the user for the amount of their deposit and updates the selected account
void DepositMoney( double *currBal) 
{
double depotsit;
printf("Please enter amount you would like to deposit\n");
scanf("%lg", &depotsit);
*currBal += depotsit;
printf("Don't forget your receipt!\n");
}
//Displays the user’s current account balance for the selected account
void ShowBalance( double currBal) 
{
	system("color 6A");
printf("You have %.2f in your account\n",currBal );
}
//Prompts the user for the amount of the withdrawal, determines if there are
//sufficient funds and updates the selected account if funds are dispensed
void WithdrawMoney( double *currBal)
 {
double requestedFunds;
printf("Please enter the amount of your withdrawal: \n");
scanf("%lg", &requestedFunds);
if( requestedFunds > *currBal ) 
{
printf("Warning! Insufficient funds!\n");
return;
}
*currBal -= requestedFunds;
printf("Please take your cash and receipt\n");
}
//Asks the user if he wants another transaction
void Repeat(char *doAgain) 
{
printf("Do you wish to make another selection? (y or n): \n");
scanf("%s", doAgain);
}
int main()
 {
double checking = 100000.0;
double savings = 5000.0;
double credit = -4200.0;
char typeAccat, doAgain;
int choice;
double currBal;
printf("\t\t\t\tWelcome to yourbank\n");
do {
mainMenu(&choice);
switch (choice) {
case 1:
AccountMenu(&typeAccat);
switch (typeAccat) {
case 'C':
DepositMoney(&checking);
 break;
case 'S':
DepositMoney(&savings);
break;
case 'R':
DepositMoney(&credit);
 break;
default:
printf("Please select an account type correctly\n\n");
break;
}
break;
case 2:
AccountMenu(&typeAccat);
switch (typeAccat) {
case 'C':
WithdrawMoney(&checking);
 break;
case 'S':
WithdrawMoney(&savings);
break;
case 'R':
WithdrawMoney(&credit);
 break;
default:
printf("Please select an account type correctly\n\n");
break;
}
break;
case 3:
AccountMenu(&typeAccat);
switch (typeAccat) {
case 'C':
ShowBalance(checking);
 break;
case 'S':
ShowBalance(savings);
 break;
case 'R':
ShowBalance(credit);
break;
default:
printf("Please select an account type correctly\n\n");
break;
}
 break;
default:
printf("Please select an account type correctly\n");
break;
}
printf("\n");
 Repeat(&doAgain);
} while (doAgain != 'N' && doAgain != 'n');
system("pause");
return 0;
/*case 5:
	default:
	printf("\tThank you vist again");
	break;*/
}

