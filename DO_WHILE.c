#include<stdio.h>

int main()
{
    int num ; 
    int sum  = 0; 
    do{
        printf("enter number : ");
        scanf("%d",&num);
        sum += num ;

    }while(num>0);
    printf("sum of the numbers is %d", sum);
}