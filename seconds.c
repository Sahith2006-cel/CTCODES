#include<stdio.h>
int main()
{
float seconds,hours,minutes,time;
printf("Enter an integer (seconds):");
scanf("%f",&seconds);
hours= (seconds/3600);
minutes= (seconds/60);
printf("hours:%f\n",hours);
printf("minutes:%f\n",minutes);
}
