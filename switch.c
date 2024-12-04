#include<stdio.h>
int main()
{
int a,b,s,choice;
printf("Enter a nad b:");
scanf("%d%d",&a,&b);
printf("1-Add,2-Subtraction,3-Division,4-Multiplication");
printf("Enter your choice to be perfomed");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	s = a + b;
	printf("%d",s);
	break;
	case 2:
	s = a - b;
	printf("%d",s);
	break;
	case 3:
	s = a/b;
	printf("%d",s);
	break;
	case 4:
	s = a*b;
	printf("%d",s);
	break;
	default:
	printf("Invalid Input Entered");
}
}
