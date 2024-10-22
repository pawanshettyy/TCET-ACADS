#include <stdio.h>

int main() {
    int choice, num1, num2, result;

    printf("Menu:\n");
    printf("1. Multiply two numbers\n");
    printf("2. Exit\n");

    while (1) {  
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        
        if (choice == 1) {
            printf("Enter first number: ");
            scanf("%d", &num1);
            printf("Enter second number: ");
            scanf("%d", &num2);

            result = num1 * num2;  
            printf("Result: %d\n", result);
        } 
        else if (choice == 2) {
            printf("Exiting the program.\n");
            break;  
        } 
        else {
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
