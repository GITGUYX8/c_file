#include<stdio.h>

int main()
{
    char grade ;
    printf("ENTER THE GRADE: ");
    scanf("%c",&grade);
    switch (grade)
    {
        case 'A':
            printf("perfect!!");
            break;
        
        case 'B':
            printf("it's good !");
            break;
        case 'C':
            printf("yeah it's okay bro!!");
            break;
        case 'D':
            printf("YOU JUST AT THE EDGE!!");
            break;
        case 'f':
            printf("got failed!!");
            break;


    }
}