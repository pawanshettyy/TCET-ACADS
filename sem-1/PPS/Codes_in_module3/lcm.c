#include <stdio.h>

int main() {
    int num1, num2, max;

    // Input two numbers from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Maximum number between num1 and num2 is stored in max
    max = (num1 > num2) ? num1 : num2;

    // Loop until we find a multiple of both num1 and num2
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("LCM of %d and %d is %d\n", num1, num2, max);
            break;
        }
        ++max;
    }

    return 0;
}