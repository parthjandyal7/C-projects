#include <stdio.h>

int main() {
    int num, i = 2;
    int isPrime = 1;  // Assume number is prime initially

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  // 0 and 1 are not prime
    } else {
        while (i <=(num/2)) {  // Check divisibility up to sqrt(num)
            if (num % i == 0) {
                isPrime = 0;  // Not prime
                break;
            }
            i++;
        }
    }

    if (isPrime) {
        printf("%d is a prime number", num);
    } else {
        printf("%d is not a prime number", num);
    }

    return 0;
}