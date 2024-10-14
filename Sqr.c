#include<stdio.h>
#include<math.h>
int main()
{
    double a;
    double b; 
    printf("ENTER SIDE FIRST: ");
    scanf("%lf",&a);
    printf("ENTER SIDE SECOND: ");
    scanf("%lf",&b);
    double c = sqrt(a*a + b*b);
    printf("THE LENGTH OF THE HYPOTENUOUS IS: %.3lf",c);    

}