\\Program to store and display the employee details
#include<studio.h>
{
int age,phone number,salary;
Char name[25];
}
emp[100];
void main ()
{
int i,n;
printf("enter the number of employees\n");
scanf("%d",&n);
printf ("enter employee information as Name,age, phone number,salary\n");
for(i=0;i<n;i++)
{
scanf("%s,%d,%d,%d",&emp[i].name,&emp[i].age,&emp[i].phone number,&emp[i].salary);
}
printf("\nemp_name\temp_age\temp_phone number\temp_salary\n");
for(i=0;i<n;i++)
{
printf("\t\t%s\t\t%d\t\t%d\t\t%d\n",emp[i].name,emp[i].age,emp[i].phone number,emp[i].salary);
}
}
