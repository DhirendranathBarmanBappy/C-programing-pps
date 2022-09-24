
#include<stdio.h>
int main()
{
    int i,n,result=1;

    printf("Enter number of n:  ");
    scanf("%d",&n);

    //for(i=1;i<=n;i++)
        //for(i=1;i<=n;i+=2)
         //for(i=2;i<=n;i+=2)

           for(i=1;i<=n;i+=2)
    {
        //result=result*(i*i);
           result=result*(i*i*i);

    }
    printf("\n Multiple is:%d",result);

    getch();

}
