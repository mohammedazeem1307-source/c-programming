#include <stdio.h>

int main() {
    int a, b, result;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    result = a * b;

    printf("Result of multiplication: %d\n", result);

    return 0;
}
