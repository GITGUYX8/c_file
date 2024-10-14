#include<stdio.h>
#include<ctype.h>
 
int main() {
    char unit ;
    float temp ; 
    printf("Enter the input for changing (F)or(C): ");
    scanf("%c", &unit);

    unit = toupper(unit);
    
    if (unit == 'C') {
        printf("the temp is currently in %c ", unit);
        printf("\nenter the temp in celcius: ");
        scanf("%f", &temp);
        temp = (temp * 9/5) + 32 ;
        printf("the temp in FERENHEIT is : %.2f ", temp);
                
    }
    else if (unit == 'F'){
       printf("the temp is currently in %c ", unit) ;
       printf("\nenter the temp in ferenheit: ");
       scanf("%f", &temp);
       temp = ((temp - 32)*5)/9;
       printf("the temp in CELCIUS is : %.2f ", temp);
       
    }
    else {
        printf("unit entered is incorrect! %c ",unit);
    }
}