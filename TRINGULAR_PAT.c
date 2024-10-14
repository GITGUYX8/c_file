#include<stdio.h>
int main()
{
    int n ; 
    printf("enter the number to get trigular pattern  : ");
    scanf("%d",&n);
    for (int i  = 0 ; i <= n ; i++ )
    {
        for (int q = 0 ; q<=i ; q++)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
    return 0;
}