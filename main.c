#include <stdio.h>
#include "arithmetic.h"

int main() {
    int a = 10, b = 5;

    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", subtract(a, b));
    printf("Multiplication: %d\n", multiply(a, b));

    if (b != 0) {
        printf("Division: %d\n", divide(a, b));
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
