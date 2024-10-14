#include<stdio.h>
int main()
{
    int num1 ;
    int o = 1 ;
    printf("enter the num to find factorial : ");
    scanf("%d", &num1);
  
    for (int i = 1 ; i < num1 + 1 ; i++)
     {
        o = o * i ;
     }
    printf("factorial of %d is %d ", num1, o); 
    
} 