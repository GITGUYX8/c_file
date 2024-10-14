#include <stdio.h>
#include <stdbool.h>

int main() 
{
    printf(" hey guys!\n");
    printf("\"hey guys!\"\n");
    // here \" is escape sequence like \n 
    int num1 = 20;
    char num2[] = "30";
    float num3 = 40.0126756781526745;
    const double num4 = 40.0126756781526745;
    printf("num1 is %1.2d \n num2 is %1.2s \n num3 is %12.12f \n num4 is %12.15lf\n",num1, num2, num3, num4);
    char f = 77;
    printf(" %c", f);
    return 0;
}
