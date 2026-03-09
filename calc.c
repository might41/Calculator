#include <stdio.h>

int main(){

    char op;
    double number1;
    double number2;
    double result;

    printf("\nEnter an operator: ");
    scanf("%c", &op);

    printf("Enter number 1: ");
    scanf("%lf", &number1);

    printf("Enter number 2: ");
    scanf("%lf", &number2);

    switch(op){
        case '+':
            result = number1 + number2;
            printf("\nThe result is: %2.lf", result);
            break;
        case '-':
            result = number1 - number2;
            printf("\nThe result is: %2.lf", result);
            break;
        case '*':
            result = number1 * number2;
            printf("\nThe result is: %2.lf", result);
            break;
        case '/':
            result = number1 / number2;
            printf("\nThe result is: %2.lf", result);
            break;
        default:
            printf("%c is not valid", op);
    }
}
