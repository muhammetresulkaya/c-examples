#include <stdio.h>

int main() {


    int num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Error: Division by zero is not allowed.\n");
            return 1; 
        }
    } else {
        printf("Error: Invalid operator.\n");
        return 1; 
    }
    printf("Result: %d\n", result);


    return 0;
}

// write same code using switch case statement
#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (operator) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
        break;
    default:
        printf("Error: Invalid operator.\n");
        return 1;
    }
    printf("Result: %d\n", result);

    return 0;
}