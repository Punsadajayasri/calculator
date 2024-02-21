#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    float num1;
    float num2;
    float result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c",&operator);

    printf("Enter number 1: ");
    scanf("%f",&num1);

    printf("Enter number 2: ");
    scanf("%f",&num2);

    switch(operator){

      case '+':
        result = num1 + num2;
        printf("\nResult: %f",result);
        break;

      case '-':
        result = num1 - num2;
        printf("\nResult: %f",result);
        break;

      case '/':
        result = num1 / num2;
        printf("\nResult: %f",result);
        break;

      case '*':
        result = num1 * num2;
        printf("\nResult: %f",result);
        break;

    default:
        printf("%c is not valid",operator);
   }


  return 0;

}
