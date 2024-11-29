#include<stdio.h>
int area();
int peri();
int main()
{
int r,peri,area;
printf("enter the radius\n");
scanf("%d",&r);
peri=4*r;
area=r*r;
printf("the perimeter is %d",peri);
printf("the area is %d",area);
}
int area(int x)
{
return(x*x);
}
int peri(int x)
{
return(4*x);
}
