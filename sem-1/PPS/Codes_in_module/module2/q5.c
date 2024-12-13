/*5 mark ques, q no 7*/

#include <stdio.h>

int main() {
    int a = 10;
    int b = -a; // Unary minus
    int c = +a; // Unary plus
    int d = ++a; // Pre-increment
    int e = --a; // Pre-decrement
    int f = a++; // Post-increment
    int g = a--; // Post-decrement

    // Display the results
    printf("Initial value of a: 10\n");
    printf("Unary minus of a: %d\n", b);
    printf("Unary plus of a: %d\n", c);
    printf("Pre-increment of a: %d\n", d);
    printf("Pre-decrement of a: %d\n", e);
    printf("Post-increment of a: %d\n", f);
    printf("Post-decrement of a: %d\n", g);

    return 0;
}