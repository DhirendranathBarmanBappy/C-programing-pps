#include<stdio.h>
int main()
{
    char string[30];

    printf("Enter your full name: ");
    //scanf("%s",&string);   scanf dia Bappy roy ar roy ta print korte pare na or space ar pore
    gets(string);

    printf("Full name:%s",string);
}
