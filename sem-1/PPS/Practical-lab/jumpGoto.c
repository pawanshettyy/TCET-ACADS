#include <stdio.h>

int main() {
    int choice, number;

start: 
    printf("\n--- Menu ---\n");
    printf("1. Enter a Number\n");
    printf("2. Skip to End\n");
    printf("3. Restart\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &number);

            if (number < 0) {
                printf("Negative number entered! Restarting...\n");
                goto start;  
            }

            printf("You entered: %d\n", number);
            break;  

        case 2:
            printf("Skipping to the end...\n");
            goto end;  
        case 3:
            printf("Restarting...\n");
            goto start;  

        case 4:
            printf("Exiting the program...\n");
            break;  

        default:
            printf("Invalid choice! Try again.\n");
            goto start;  
    }

end:  
    printf("Program terminated.\n");

    return 0;
}
