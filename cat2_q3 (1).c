#include <stdio.h>

int main() {
    float hours_worked;
    float hourly_wage;
    float grossPay;
    float taxes;
    float netPay;

    const float OVERTIME_RATE = 1.5;
    const float taxrate1 = 0.15;
    const float taxrate2 = 0.20;
    const float tax_threshold = 600.0;

    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);
    if (hours_worked > 40) {
        float regularHours = 40;
        float overtimeHours = hours_worked - regularHours;
        grossPay = (regularHours * hourly_wage) + (overtimeHours * hourly_wage * OVERTIME_RATE);
    } else {
        grossPay = hours_worked * hourly_wage;
    }
    if (grossPay <= tax_threshold) {
        taxes = grossPay * taxrate1;
    } else {
        taxes = (tax_threshold * taxrate1) + ((grossPay - tax_threshold) * taxrate2); // Fixed misplaced parenthesis
    }

    netPay = grossPay - taxes;

    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}
