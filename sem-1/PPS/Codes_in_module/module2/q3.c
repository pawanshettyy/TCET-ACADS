/*5 mark ques, q no 5 */

#include <stdio.h>
#include <math.h>

int main() {
    double num, squareRoot, square;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Calculate the square root and square of the number
    squareRoot = sqrt(num);
    square = pow(num, 2);

    // Display the results
    printf("Square root of %.2lf is %.2lf\n", num, squareRoot);
    printf("Square of %.2lf is %.2lf\n", num, square);

    return 0;
}


