#include<stdio.h>

int main()
{
    int row,col,n;

    printf("Enter the number of row: ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            //printf("%d",col);
            //printf("%d",row);
            //printf("%c",col+64);
            //printf("%c",row+64);
            //printf("%c",col+96);
            //printf("%c",row+96);
            //printf("%d",col%2);
              //printf("%d",row%2);
                //printf("*");
        }
        printf("\n");
    }
    return 0;
}
