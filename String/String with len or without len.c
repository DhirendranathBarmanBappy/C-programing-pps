//With strlen() function
/*
#include<stdio.h>
int main()
{
    char string[]="Dhirendranath";
    int len=strlen(string);

    printf("%d",len);
}*/

//Without strlen find the length

#include<stdio.h>
int main()
{
    char string[]="Dhirendranath";

    int i=0,len=0;

    while(string[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Length is:%d",len);
}
