#include <stdio.h>

int main() {
int input_char ;
int num ; 
 float km_miles = 0.621371 ; 
 float kg_pounds = 2.20462 ; 
 float inches_cm = 2.54 ; 
 float foot_m = 0.3048; 
 float acr_sqrm = 4046.86 ; 

 while (1)
 {
printf("\nenter the number to get\n1.km to miles\n2.kg to pounds\n3.inches to cm\n4.foot to meter\n5.acrs to sqr metre\nto quit press 'q'\n\n>> ");
 scanf("%c",&input_char);
switch (input_char)
 {
 case 'q':
    goto end;
    break;
 case 'Q':
    goto end;
    break;
 case '1':
    printf("enter the which u wanna convert km to miles :");
    scanf("%f",&num);
    printf("answer : %d",num*km_miles);
    break;
 case '2':
    printf("enter the which u wanna convert kg to pounds : ");
    scanf("%f",&num);
    printf("answer : %d",num*kg_pounds);
    break;
 case '3':
    printf("enter the which u wanna convert inches to cm :  ");
    scanf("%f",&num);
    printf("answer : %d",num*inches_cm);
    break;
 case '4':
    printf("enter the which u wanna convert foot to meter : ");
    scanf("%f",&num);
    printf("answer : %d",num*foot_m);
    break;
 case '5':
    printf("enter the which u wanna convert acr to sqr meter  : ");
    scanf("%f",&num);
    printf("answer : %d",num*acr_sqrm);
    break;
 
 default:
    break;
 } 
 }
    end:
 
    return 0 ;
}
