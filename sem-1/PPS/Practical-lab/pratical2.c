#include <stdio.h>

int main() {
    int n1, n2, result, operation;
    int relational, logical;
    int assign; 
    int increment_decrement; 
    int ternary_result; 

    printf("Enter a number: ");
    scanf("%d", &n1);

    printf("Enter another number: ");
    scanf("%d", &n2);

    printf("Select operation to be carried out: \n");
    printf("1. Sum \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Relational (n1 > n2) \n");
    printf("6. Logical (n1 && n2) \n");
    printf("7. Increment n1 \n");
    printf("8. Decrement n2 \n");
    printf("9. Assignment (n1 = n2) \n");
    printf("10. Ternary (n1 > n2 ? n1 : n2) \n");
    scanf("%d", &operation);
    
    switch (operation) {
        case 1: 
            result = n1 + n2;
            printf("Result: %d + %d = %d\n", n1, n2, result);
            break;
        case 2: 
            result = n1 - n2;
            printf("Result: %d - %d = %d\n", n1, n2, result);
            break;
        case 3: 
            result = n1 * n2;
            printf("Result: %d * %d = %d\n", n1, n2, result);
            break;
        case 4: 
            if (n2 != 0) {
                result = n1 / n2;
                printf("Result: %d / %d = %d\n", n1, n2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5: 
            relational = (n1 > n2);
            printf("Relational (n1 > n2): %d\n", relational);
            break;
        case 6: 
            logical = (n1 && n2);
            printf("Logical (n1 && n2): %d\n", logical);
            break;
        case 7: 
            increment_decrement = ++n1;
            printf("After increment, n1 = %d\n", increment_decrement);
            break;
        case 8: 
            increment_decrement = --n2;
            printf("After decrement, n2 = %d\n", increment_decrement);
            break;
        case 9: 
            assign = n1 = n2;
            printf("After assignment, n1 = %d\n", assign);
            break;
        case 10: 
            ternary_result = (n1 > n2) ? n1 : n2;
            printf("Ternary result (n1 > n2 ? n1 : n2): %d\n", ternary_result);
            break;
        default:
            printf("Error: Invalid operation selected.\n");
    }

    return 0;
}
