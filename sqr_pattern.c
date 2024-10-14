#include<stdio.h>

int main()
{
    int rows;
    int coloums;
    char symbol;
    int sum ; 
    printf("enter no. of rows : ");
    scanf("%d", &rows );
    printf("enter no. of coloums : ");
    scanf("%d", &coloums );

    printf("enter symbol :");
    // scanf("%c")  
    scanf(" %c", &symbol ); /* notice there is a blank space before %c which is further consumed by %c or
                                       else %c consume \n which cuz blank lines in output */    
    for (int i=0; i<rows; i++)
    {   for (int a = 0; a < coloums ; a++)
        {
            printf("%c",symbol);
        }
        printf("\n");
    }

        
}
