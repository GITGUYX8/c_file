#include<stdio.h>
int fib_iter(int num);
int fib_rec(int num);

int main()
{
  int number ;
  printf("enter the number to get fibonacci series sum  : ");
  scanf("%d",&number);
  printf("the sum by itretive  approach : %d\n",fib_iter(number));
  printf("the sum by recurssive approach : %d\n",fib_rec(number));

  return 0;
}

int fib_iter(int num)
{
  int a = 0;
  int b = 1;
  for (int i =0 ; i <= num-2;i++ ){
    b = a + b;
    a = b - a;

  } 
  return a ; 
  
}

int fib_rec(int num)
{
  if (num == 1 || num ==2)
  {
    return num-1;
  }
  else {
    return fib_rec(num-1)+fib_rec(num-2);
  }
  }
