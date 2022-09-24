#include<stdio.h>

int main()
{
    //int n1,n2,sum=0,a=1,b=2;
    //int n1,n2,sum=0,a=1,b=3;
     int n1,n2,n3,sum=0,a=1,b=3,c=4;

    printf("Enter the number n1 and n2 and n3:");
    scanf("%d  %d %d",&n1,&n2,&n3);

    //printf("1*2+2*3+3*4+...........+%d*%d",n1,n2);
    // printf("1*3+2*5+3*7+...........+%d*%d",n1,n2);
        printf("1*3*4+2*5*8+3*7*12+...........+%d*%d*%d",n1,n2,n3);

    while(a<=n1&&b<=n2&&c<=n3)
    {
        sum=sum+a*b*c;
        a=a+1;
        //b=b+1;
        b=b+2;
        c=c+4;
    }
    printf("= %d",sum);

    return 0;
}
