#include<stdio.h>
int main()
{ 
    int n = 4;
    for (int i = 0 ; i <= n ; i++)
    {
        for (int q = n-i ; q >= 1 ; q--)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
    return 0;
}
