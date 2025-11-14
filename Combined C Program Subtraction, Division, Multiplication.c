#include <stdio.h>
int main() {
    int choice;
    float a, b, result;
    printf("Choose an operation:\n");
    printf("1. Subtraction\n");
    printf("2. Division\n");
    printf("3. Multiplication\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    switch(choice) {
        case 1:
            result = a - b;
            printf("Result of subtraction: %.2f\n", result);
            break;
        case 2:
            if (b != 0) {
                result = a / b;
                printf("Result of division: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 3:
            result = a * b;
            printf("Result of multiplication: %.2f\n", result);
            break;
        default:
            printf("Invalid choice. Please select 1, 2, or 3.\n");
    }

    return 0;
}
