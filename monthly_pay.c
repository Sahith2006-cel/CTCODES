#include<stdio.h>
int main()
{
float monthly_pay,hours_worked,rate,total_weeks;
rate=50;
total_weeks=4;
printf("Enter the no of hours worked:");
scanf("%f",&hours_worked);
monthly_pay=hours_worked*rate*total_weeks;
printf("The monthly pay of an employee is:%f\n",monthly_pay);
}

