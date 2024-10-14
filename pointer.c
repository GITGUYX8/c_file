#include <stdio.h>

int main() {
int a ;
int *q = &a;

printf("enter the number in a  : ");
scanf("%d",q);

printf("%d\n",a);
printf("address of a by & sign  : %p\n",&a);
printf("value of p as pointer : %p\n",q);
printf("address of p :  %p",&q);


 
    return 0 ;
}
