#include <stdio.h>
#include <math.h>  // Needed for pow() and round()

int main() {
    int num, originalNum, remainder, result = 0, n = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    // ===== Small Edit 1: Count the number of digits =====
    temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        // ===== Small Edit 2: Use pow() with number of digits and round =====
        result += (int)round(pow(remainder, n));
        temp /= 10;
    }

    if (result == originalNum)
        printf("%d is an armstrong number", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}