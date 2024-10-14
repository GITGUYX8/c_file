#include<stdio.h>
int main()
{

    // int x = 2;
    // int y = 5;
    // float z = y %  x ; 
    // float a = y / (float) x ; 
    // printf("%.1f\n",z);
    // printf("%.1f",a);

    //HERE CHOOSE THE FILE NAME WISELY DON'T USE ANY FUNTION NAME AS IT CAUSE PROBLEM IN EXECUTION
    int age;
    char name[20];
    printf("how old are you? ");
    // scanf("%d\n",&age);   //don't use '\n', as scanf ask for another input!!!
    scanf("%d",&age); 
    printf("OR BHAI KYA NAAM H! ");
    scanf("%s",&name);  // here in input we can only type without spaces and thats the problem 
    printf("hey %s, mje chl rhe h huh!!\n",name);
    printf("%d saal punara ho gya...", age);
    return 0;
}