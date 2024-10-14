#include<stdio.h>
int main()
{
    for (int i = 0 ; i < 4 ; i++)
    {
        for (int j = 3; j>i ; j-- )
        {
            for (int k = 0; k < 7 ; k++)
            {
                if (k = j)
                {
                    printf("*");
                }
                else {

                    printf(" ");
                }
            }
        }
    }
    return 0;
} 