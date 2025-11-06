/*
Name:Faith Mutheu

Reg No:CT101/G/26461/25
Description:wages Rating
*/

#include <stdio.h>

int main() {
    float hours, wage, grossPay, taxes, netPay;
    
    // Input hours worked and hourly wage
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &wage);

    // Calculate gross pay
    if (hours <= 40) {
        grossPay = hours * wage;
    } else { 
        grossPay = (40 * wage) + ((hours - 40) * wage * 1.5);
    }

    // Calculate taxes
    if (grossPay <= 600) {
        taxes = grossPay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    // Calculate net pay
    netPay = grossPay - taxes;

    // Output results
    printf("\nGross Pay: $%.2f", grossPay);
    printf("\nTaxes: $%.2f", taxes);
    printf("\nNet Pay: $%.2f\n", netPay);

    return 0;
}