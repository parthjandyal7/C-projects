#include <stdio.h>

int main() {
    int n, num, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number of elements.\n");
        return 0;
    }

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;  

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max) {
            max = num;  
        }
    }

    printf("Maximum number = %d\n", max);

    return 0;
}