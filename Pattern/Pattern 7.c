#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter the value of row: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            //printf("#");
            //printf("%d",col);
             //printf("%d",row);
             //printf("%c",col+96);
             printf("%c",row+96);
        }
        printf("\n");
    }

}
