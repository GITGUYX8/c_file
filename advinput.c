#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int age;
    printf("naam: %s",name);
    fgets(name, 20 , stdin); //HERE FGETS(var,charlength,stdin for input) is used as it can take spaces unlike scanf()
    name[strlen(name)-1] = '\0';
    printf("kitne saal kaa h : ",age);
    scanf("%d",&age);
    printf("welcome %s BHAI KESA H..\n",name);
    printf("tu bc %d saal ka ho gya!!", age);
}