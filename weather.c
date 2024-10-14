#include<stdio.h>
#include<stdbool.h>

int main()
{
    int temp ;
    printf("enter the temp : ");
    scanf("%i",&temp);
    if (temp < 0 || temp > 30) // .........'||' is = or .........and  = '&&'...........'!'with boolean is = NOT 
    {   
        printf("Weather is BAD! ");
    }
    bool sunny = true; 
    if (!sunny){
        printf("Weather is BAD! ");
    }
    else
    {
        printf("weather is good! ");
    }
 
}

