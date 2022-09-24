#include<stdio.h>

int main()
{
    int i,n,sum=0;

    printf("Enter the last number of the serious: ");
    scanf("%d",&n);
    //printf("1+2+3+..........+%d",n);
     printf("1+3+5+..........+%d",n);


    //for(i=1;i<=n;i+=1)
         for(i=1;i<=n;i+=2)
    {
        sum=sum+i;
    }
    printf("=%d",sum);

    return 0;

}
