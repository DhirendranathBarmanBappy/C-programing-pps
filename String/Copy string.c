#include<stdio.h>
int main()
{
    char source[]="C program";
    char target[20];

    strcpy(target,source);
    printf("Source code is:%s\n",source);
     printf("Target code is:%s\n",target);
}
