/*5 mark ques, q no 6*/

#include <stdio.h>

int main() {
    int hoursWorked, overtimeHours;
    double rate, overtimeRate, salary, overtimePay, netSalary;

    // Input the number of hours worked and their respective rate
    printf("Enter the number of hours worked: ");
    scanf("%d", &hoursWorked);
    printf("Enter the rate per hour: ");
    scanf("%lf", &rate);

    // Input the number of overtime hours and their respective overtime rate
    printf("Enter the number of overtime hours: ");
    scanf("%d", &overtimeHours);
    printf("Enter the overtime rate per hour: ");
    scanf("%lf", &overtimeRate);

    // Compute the salary and overtime pay
    salary = hoursWorked * rate;
    overtimePay = overtimeHours * overtimeRate;

    // Compute the net salary
    netSalary = salary + overtimePay;

    // Display the results
    printf("Salary: %.2lf\n", salary);
    printf("Overtime Pay: %.2lf\n", overtimePay);
    printf("Net Salary: %.2lf\n", netSalary);

    return 0;
}