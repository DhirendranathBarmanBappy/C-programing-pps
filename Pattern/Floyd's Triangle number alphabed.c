#include<stdio.h>
int main()
{
    int row,col,n,count=0;
    char ch='A';

    printf("Enter value: ");
    //scanf("%d",&n);
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            //printf("%d",++count);
             printf("%c",ch++);
        }
        printf("\n");
    }
}
