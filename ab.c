#include <stdio.h>
#include <math.h>

void printAbsoluteValue(double x) {
    printf("Absolute value of %f is %f\n", x, fabs(x));
}

int main() {
    int x;
    printf("enter the number:\n");
    scanf("%d",&x);
    printAbsoluteValue(x);
    return 0;
}
