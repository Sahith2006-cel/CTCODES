#include<stdio.h>
int main()
{
int mat,phy,che,eng,ip;
float per;
printf("enter the five subject marks: ");
scanf("%d%d%d%d%d",&mat,&phy,&che,&eng,&ip);
per=(mat+phy+che+eng+ip) / 5;
printf("the percentage = %f\n",per);
if(per >= 90)
{printf("grade a");}
else if(per >= 80)
{printf("grade b");}
else if(per >= 70)
{printf("grade c");}
else
{printf("grade d");}
}
