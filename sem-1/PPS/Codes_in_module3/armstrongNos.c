#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result;

    printf("3-digit Armstrong numbers are:\n");
    for (num = 100; num <= 999; num++) {
        originalNum = num;
        result = 0;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, 3);
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}