#include<math.h>
#include<stdio.h>
int main()
{
	float a,b,c,x,y;
	int root;
	printf("Quadratic equation is of the form ax^2+bx+c");
	printf("Enter the value's of a,b and c:");
	scanf("%f%f%f",&a,&b,&c);
	printf("Select the opertaion to perform:");
	printf("1 = Calculate roots");
	scanf("%d",&root);
	switch(root)
	{
		case 1:
		if(b*b-4*a*c > 0)
	    x = -b + sqrt(b*b-4*a*c)/(2*a);
	    y = -b - sqrt(b*b-4*a*c)/(2*a);  
		printf("The roots are %f%f:",x,y);
		break;
		case 2:
		if(b*b-4*a*c < 0)
		printf("Imaginary roots!!");
		break;
		case 3:
		if(b*b-4*a*c == 0)
		   x = sqrt(-b + b*b-4*a*c/2*a);
	    y = sqrt(-b - b*b-4*a*c/2*a); 
	    printf("The roots are %f%f:",x,y);
	    break;          
	default:
	printf("Invalid input");
}
}
		
