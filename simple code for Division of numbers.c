#include <stdio.h>

int main() {
    float a, b, result;

    printf("Enter numerator: ");
    scanf("%f", &a);

    printf("Enter denominator: ");
    scanf("%f", &b);

    if (b != 0) {
        result = a / b;
        printf("Result of division: %.2f\n", result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
