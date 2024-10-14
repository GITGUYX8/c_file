#include<stdio.h>

double square( double x )
{   
    x = x*x; // NO NEED TO DEFINE 'DOUBLE' HERE AS IT DEFINED ABOVE!!!!
    return x ;
}

int main()
{
    double num ;
    printf("enter a num to get square of it : ");
    scanf("%lf",&num);
    printf("%.2lf is the square of num %.2lf ",square(num), num);
}
