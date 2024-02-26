#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n, result;
    
    printf("Armstrong numbers between 1 and 1000:\n");

    for (num = 1; num <= 1000; ++num) {
        originalNum = num;
        n = 0;
        result = 0;

        // Count the number of digits
        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }

        originalNum = num;

        // Check if the number is Armstrong
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
