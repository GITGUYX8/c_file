#include<stdio.h>

int main()
{
    int arr[3][2]; // arr[3][2] = {{1,2},
    //                             {3,4},
    //                             {5,6}}
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[1][0] = 3;
    arr[1][1] = 4;
    arr[2][0] = 5;
    arr[2][1] = 6;
    for (int j = 0 ; j< 2 ; j++)
    {
        for (int i=0; i<3; i++)
        {
            printf("%d ", arr[i][j]);

        }
        printf("\n");
    }
}