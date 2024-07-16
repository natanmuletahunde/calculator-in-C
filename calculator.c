#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}