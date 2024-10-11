#include <stdio.h>

int main() {
    int employeeNo;
    int category;
    float salary;
    float allowance;

    
    printf("Enter Employee Number: ");
    scanf("%d", &employeeNo);
    
    printf("Enter Category (1-4): ");
    scanf("%d", &category);
    
    printf("Enter Salary: ");
    scanf("%f", &salary);

    
    switch (category) {
        case 1:
            allowance = 0.30 * salary; 
            break;
        case 2:
            allowance = 0.20 * salary; 
            break;
        case 3:
            allowance = 0.10 * salary; 
            break;
        case 4:
            allowance = 0.05 * salary; 
            break;
        default:
            printf("Invalid category! Please enter a category between 1 and 4.\n");
            return 1;
    }

    
    printf("Employee Number: %d\n", employeeNo);
    printf("Category: %d\n", category);
    printf("Salary: %.2f\n", salary);
    printf("Rent Allowance: %.2f\n", allowance);

    return 0; 
}
