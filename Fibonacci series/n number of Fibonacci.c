
//Fibonacci is the sum of befor two number.

#include<stdio.h>

int main()
{
    int first=0,second=1,fibo,n,count=0;

    printf("Enter number of fibo: ");
    scanf("%d",&n);

    while(count<n)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d ",fibo);
        count++;
    }
}













