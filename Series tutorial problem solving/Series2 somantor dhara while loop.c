#include<stdio.h>

int main()
{
    //int i,sum=0,a=1,n;
    int i,sum=0,a=2,n;

    printf("Enter the last number: ");
    scanf("%d",&n);
    //printf("1+2+3+.........+%d",n);
    //printf("1+3+5.........+%d",n);
      printf("2+4+6.........+%d",n);

    while(a<=n)
    {
        sum=sum+a;
        //a=a+1;
        a=a+2;
    }
    printf("=%d",sum);

    getch();
}
