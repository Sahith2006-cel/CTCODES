#include<stdio.h>
int main()
{
char ch;
printf("enter any character: ");
scanf("%c",&ch);
if(((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')))
{printf("it is a character");}
else
{printf("it is not a character");}
}
