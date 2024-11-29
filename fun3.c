#include<stdio.h>
int add(int);
int main()
{
int num1,num2,tot;
printf("enter thr no\n");
scanf("%d%d",&num1,&num2);
tot=num1+num2;
printf("the total is %d",tot);
}
int add(int x)
{
return (x+x);
}
