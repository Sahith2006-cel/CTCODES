#include<stdio.h>
int main()
{ 
int num;
char character;
printf("Enter any number or character:");
scanf("%d",&num);
scanf("%c",&character);
if (num >= 0 && num <= 9)
printf("You have scored 10 points!!\n");
else if (character == 'a' ,'A' || character == 'e' , 'E' || character == 'i' , 'I' || character == 'o' , 'O' || character == 'u' , 'U')
printf("You have scored 5 points!!\n");
else
printf("You have scored 0 points!!\n");
}
