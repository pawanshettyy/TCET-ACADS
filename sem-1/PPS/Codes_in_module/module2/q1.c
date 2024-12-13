/*5 mark ques, q no 3*/

#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;

    // Relational operators
    printf("Relational Operators:\n");
    printf("a < b: %d\n", a < b);  // 1 (true)
    printf("a > b: %d\n", a > b);  // 0 (false)
    printf("a <= b: %d\n", a <= b); // 1 (true)
    printf("a >= b: %d\n", a >= b); // 0 (false)
    printf("a == b: %d\n", a == b); // 0 (false)
    printf("a != b: %d\n", a != b); // 1 (true)

    // Logical operators
    printf("\nLogical Operators:\n");
    printf("(a < b) && (b < c): %d\n", (a < b) && (b < c)); // 1 (true)
    printf("(a > b) || (b < c): %d\n", (a > b) || (b < c)); // 1 (true)
    printf("!(a == b): %d\n", !(a == b)); // 1 (true)

    return 0;
}