#include<stdio.h>
int main()
{
int number;
printf("Enter any number:");
scanf("%d",&number);
if (number>0)
printf("It is a positive number\n");
else if (number<0)
printf("It is a negative number\n");
else if (number==0)
printf("It is zero\n");
}

