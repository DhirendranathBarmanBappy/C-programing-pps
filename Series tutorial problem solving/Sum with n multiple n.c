#include<stdio.h>

int main()
{
    int i,n,sum=0;

    printf("Enter the number of n: ");
    scanf("%d",&n);

    //for(i=1;i<=n;i++)
        for(i=1;i<=n;i+=2)
    {
        printf("%d\n",i);
        sum=sum+i*i;
    }
    printf("Sum is:%d",sum);

    return 0;
}
