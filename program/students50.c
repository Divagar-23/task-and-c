/*
	Name:divagar 
	Copyright: 
	Author: array
	Date: 02-02-23 12:12
	Description: structure
*/
struct divagar
{
	char student_name[50] ;
	int student_age;
	int student_rollno;
//	int student_d.o.b;
};
int main()
{
struct divagar a[50];
int i;
for(i=0;i<2;i++)
{
	printf("enter the student name:");
	scanf("%s",&a[i].student_name);
	printf("enter the age:");
	scanf("%d",&a[i].student_age);
	printf("enter the roll no:");
	scanf("%d",&a[i].student_rollno);
}
	for(i=0;i<2;i++)
	{
	printf("%s\n",a[i].student_name);
	printf("%d\n",a[i].student_age);
	printf("%d\n",a[i].student_rollno);
	}
}
