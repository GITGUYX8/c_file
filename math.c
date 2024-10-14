#include<stdio.h>

int main() 
{
    char operator ;
    float num1 ;  
    float result ; 
    float num2 ;
    printf("enter the operator ('*','+','-','/') : ");
    scanf("%c", &operator);
    printf("Enter num1 : ");
    scanf("%f", &num1);  // only use %f(as variable is float) during taking a value or simply in scanf() function..
    printf("Enter num2 : ");
    scanf("%f", &num2);
    switch (operator)
    /*
     A 'float' typically uses 4 bytes, while a 'double' uses 8 bytes.
      When you use %lf(which is used for double!) 
     for a float, printf expects 8 bytes of data but only gets 4 bytes,
      leading to #incorrect interpretation of the data.
      hence any value could be displayed!!!
    
    */
    {
        case '+':

            result = num1 + num2;
            printf("%lf", result);
            break;
        case '-':

            result = num1 - num2;
            printf("%.2lf", result); //result can be %lf as it has a value 
            break;
        case '*':

            result = num1 * num2;
            printf("%.2lf", result);
            break;
        case '/':

            result = num1 / num2;
            printf("%.2lf", result);
            break;
        default:
            printf("entered input is incorrect!!");
            break;
    }


}