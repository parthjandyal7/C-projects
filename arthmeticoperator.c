#include <stdio.h>

int main() {
    int a, b, addition, subtraction, multiplication, remainder;

    printf("Enter the first number = ");
    scanf("%d", &a);

    printf("Enter the second number = ");
    scanf("%d", &b);

    addition = a + b;
    subtraction = a - b;
    multiplication = a * b;
    remainder = a % b;

    printf("Addition = %d\n", addition);
    printf("Subtraction = %d\n", subtraction);
    printf("Multiplication = %d\n", multiplication);
    printf("Remainder = %d\n", remainder);

    return 0;
}