#include<stdio.h>
int main()
{
    double num1,num2;
    char op;

    printf("Enter operator(+,-,*,/): ");
    scanf("%c",&op);

    printf("Enter two number: ");
    scanf("%lf %lf",&num1,&num2);

    switch(op)
    {
    case '+':
        {
            printf("%lf +%lf=%lf",num1,num2,num1+num2);
            break;
        }

         case '-':
        {
            printf("%lf - %lf=%lf",num1,num2,num1-num2);
            break;
        }

         case '*':
        {
            printf("%lf * %lf=%lf",num1,num2,num1*num2);
            break;
        }

         case '/':
        {
            printf("%lf / %lf=%lf",num1,num2,num1/num2);
            break;
        }

         default:
            printf("Enter correct number");
return 0;

    }
}
