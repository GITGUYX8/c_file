#include<stdio.h>
int fibo(int n)
{   if (n==1 || n==2)
    {
        return n-1;
    }
    else {
    return fibo(n-1) + fibo(n-2);}
}

int main()
{
    int n;
    printf("enter the number to get fabonacci series upto that : ");
    scanf("%d",&n);
    printf("%d",fibo(n));

}