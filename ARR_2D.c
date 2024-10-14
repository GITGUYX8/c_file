#include<stdio.h>

int main()
{
    int arr[2][4] = {   {1,2,3,4},
                        {2,33,44,5}}
        ;
    for (int i = 0 ; i<2 ; i++)
    {
        for (int a = 0; a<4 ; a++)
        {
            // printf("element [%d] [%d] is %d \n" ,i,a, arr[i][a]);
            printf("%d ", arr[i][a]);
        }
        printf("\n");
    }
}