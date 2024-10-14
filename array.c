#include<stdio.h>
int main()
{   
    //array[] = {....} is the container which stores same DATA TYPE values
    double number[] = {12.3, 12.4, 234.5, 12};
    printf("num : %.2lf\n", number);
    for (int i=0; i< sizeof(number)/sizeof(number[1]);i++)
    {
        printf("%d num %.2lf\n", i , number[i]);
    }
}