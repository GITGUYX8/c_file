#include<stdio.h>
int main()
{
    const double PI = 3.14; 
    double radius;
    double area;
    double perimeter;
    printf("enter the radius: ");
    scanf("%lf",&radius);
    perimeter = 2 * PI * radius;
    area = PI * radius * radius  ;
    printf("the perimeter is %.3lf\n", perimeter);
    printf("the area is %.3lf",area);
}