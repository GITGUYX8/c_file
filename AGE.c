#include<stdio.h>
int main()
{   
    int age;

    printf("ENTER YOUR AGE : ");
    scanf("%d",&age);
    if (age <= 0) 
    {
        printf("NEW BORNS and SPERMS NOT ALLOWED! ");
    }
    else if (age >= 18)
    {
       printf("can sign up!"); 
    }
    else 
    {
        printf("you are out!! ");
    }

}