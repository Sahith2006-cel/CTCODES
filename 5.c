#include<stdio.h>
int main()
{
int a;
printf("enter the number");
scanf("%d",&a);
if((a % 5 == 0) && (a % 10 == 0))
{printf("the number is divisible\n");}
else{
printf("it is not divisible");}
}
