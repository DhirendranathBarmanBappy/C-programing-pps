#include<stdio.h>

int main()
{
    int row,col,n;

    printf("Enter the number of row: ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
           // printf("# ");
            //printf("%d ",col);
            //printf("%d ",row);
            //printf("%c ",col+96);
            //printf("%c ",row+95);
        }
        printf("\n");
    }
}

