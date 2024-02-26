#include <stdio.h>

int main() {
    int num1, num2, max;

    // Input two numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Determine the maximum number between num1 and num2 without ternary operator
    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }

    // Loop until both numbers are divisible by max
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("LCM of %d and %d is %d\n", num1, num2, max);
            break;
        }
        ++max;
    }

    return 0;
}
