#include<stdio.h>
int main()
{
    int i,n,result=1;

    printf("Enter number of n:  ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        result=result*i;

    }
    printf("\n Multiple is:%d",result);

    getch();

}
