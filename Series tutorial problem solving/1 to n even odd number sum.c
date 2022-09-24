#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("Enter number of n: ");
    scanf("%d",&n);

         //for(i=1;i<=n;i++)
         //for(i=1;i<=n;i+=2)
           for(i=1;i<=n;i+=3)
          //for(i=2;i<=n;i+=2)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("\n Sum is:%d",sum);

    return 0;
}
