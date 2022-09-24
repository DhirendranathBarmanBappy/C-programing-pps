#include<stdio.h>

int main()
{
  int choice;
  float fahrens,celsiss,temp;

  printf("Temperature conversion menu\n");
  printf("1 Fahrenheit to Celsius\n");
  printf("2 Celsius to Fahrenheit\n");

  printf("Enter the number :");
  scanf("%d",& choice);

  switch( choice)
  {
  case 1:
    {
        printf("Enter the Fahrenheit temp: ");
        scanf("%f",&temp);
        fahrens=(temp-32)/1.8;
        printf("Fahrenheit is: %f",fahrens);
        break;
    }
  case 2:
    {
           printf("Enter the Celsius temp: ");
        scanf("%f",&temp);
        celsiss=(1.8*temp)+32;
        printf("Celsius is: %f",celsiss);
        break;
    }

  default :
    printf("Enter correct number");
  }
}
