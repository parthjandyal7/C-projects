#include <stdio.h>

int main() {
    int n, num, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

   

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;  // Initialize max with the first number

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max) {
            max = num;  // Update max if current number is greater
        }
    }

    printf("Maximum number = %d", max);

    return 0;
}