#include<stdio.h>
double findmax(double x, double y); //function prototype...
int main()
{
    double num1 ; 
    double num2 ; 

    printf("enter number 1 : ");
    scanf("%lf",&num1);
    printf("enter number 2 : ");
    scanf("%lf",&num2);
    
    // if (num1 == num2) {
    //     printf("entered values are equal!!"); 
    // } 

    // else {
    // printf("clearly %.2lf is greater",findmax(num1, num2));
    // }
    
    printf("clearly %.2lf is greater",findmax(num1, num2));
}
// function defined here..
double findmax(double x, double y)
{
    if (x > y)
    {
        return x ;
    }
    else if (x==y)
    {
       printf("entered values are equal!!"); 
       return 0;  
    }
    else {
        return y;
    }
    //return (x>y) ? x      : y ;  ----------------------ternary operator!
    // read it like 'if x>y then(?) return 'x'  else(:)   return 'y'
}