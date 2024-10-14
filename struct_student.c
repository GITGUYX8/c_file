#include<stdio.h>
#include<string.h>
int main()
{
    struct student 
    {
        int id ;
        int marks ; 
        char name[99];
    };
    
    struct student ayush, neon, omen ;
    ayush.id = 1;
    ayush.marks = 112;
    
    neon.id = 2 ;
    neon.marks = 102; 

    omen.id = 3 ;
    omen.marks = 312 ;
    strcpy(omen.name, "omen is valo character " );

    printf("ayush id %d and marks: %d\n ",ayush.id , ayush.marks);
    printf("neon id %d and marks: %d\n ",neon.id , neon.marks);
    printf("omen id %d and marks: %d\n ",omen.id , omen.marks);
    printf("%s",omen.name);

    return 0;
}