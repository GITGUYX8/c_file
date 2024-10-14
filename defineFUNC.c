#include<stdio.h>
 
void x(char name[], int age)    //ARGUMENT                       
{
    printf("%s, U got some good gyat huh !", name);
    printf("\nTHIS LEVEL OF PROGRESS AT %i, is next level!!!\n", age);
                                 /*REMEMBER THAT WE HAVE DEIFINE PERIMETER IN BRACKETS AS
                                VARIBLE VALID IN LOCAL MAIN{} ONLY FOR USING THEM IN 
                                DEFINED FUNC. WE HAVE GIVE ARGUMENT-PARAMETER PAIR*/

}
int main(){
    char name[] = "Bro";
    int age  = 24;
    x(name, age);  // PARAMETER
    x(name, age);
    x(name, age);
    x(name, age);
    x(name, age);
}