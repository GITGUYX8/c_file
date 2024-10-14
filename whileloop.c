#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];
    printf("what is your name: ");
    fgets(name,20,stdin);
    name[strlen(name)-1] = '\0';                //to replace newline character(\n) with \0

    while(strlen(name)==0){
        printf("enter the name !\n");
        printf("what is your name: ");
        fgets(name,20,stdin);
        name[strlen(name)-1] = '\0';                //to replace newline character(\n) with \0

    }
    printf("hello %s\n",name);

      
}

