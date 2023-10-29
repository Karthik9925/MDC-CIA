#include <stdio.h>
int main() {
    double num1, num2, result;
    char operator;
    printf("Enter an expression (e.g., 2 + 3): ");
    scanf(" %lf %c %lf", &num1, &operator, &num2); 
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
            if (num2 == 0) {
                printf("Error: Division by zero\n");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1; 
    }
    printf("Result: %lf\n", result);
    return 0;
}