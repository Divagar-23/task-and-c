/*
	Name: divagar
	Copyright: 
	Author: 
	Date: 13-02-23 11:42
	Description: header
*/
#ifndef DATACHECKER_H
#define DATACHECKER_H

void gotoxy( int x,int y );
int name_checker( char *ptr );
int gender_check( char gender[] );
int dop_check(char dob[] );
int phone_num(char *num );
int mail_checker(char *ptr );
int adhar_check(long long unsigned int num );
int check_password(char password[] );
void fileerror();
void wrong();
void exist();
void multiple();
void username(); 
#endif
