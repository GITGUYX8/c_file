#include<stdio.h>

int fact(int num)
{
    if (num == 1 || num ==0)
    {
        return 1 ; 
    }
    else {
        return (num * fact(num - 1));
    }
}
int main()
{
    int num; 
    printf("enter the number to find factorial  : ");
    scanf("%d", &num);
    printf("answer is %d ", fact(num));
}