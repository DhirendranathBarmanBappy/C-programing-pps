#include<stdio.h>

int main()

{
    int i,n;
    printf("Enter number of n: ");
    scanf("%d",&n);

    for(i=2;i<=n;i+=2)   //first i and last i ar man ar poriborton ar jonno even odd number asbe.
    {
        printf("%d\n",i);     //printf random number of i;
    }
    getch();
}
