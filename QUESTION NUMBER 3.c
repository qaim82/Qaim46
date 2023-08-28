#include <stdio.h>

int main() {
    float basicPay, houseRent, medicalAllowance, computerAllowance, totalPay;

    printf("\033[1;32mPlease enter Basic pay? \033[0m");
    scanf("%f", &basicPay);

    // Calculate allowances
    houseRent = 0.4 * basicPay;
    medicalAllowance = 0.18 * basicPay;
    computerAllowance = 0.15 * basicPay;

    // Calculate total pay
    totalPay = basicPay + houseRent + medicalAllowance + computerAllowance;

    printf("\033[1;36mPAY SLIP\033[0m\n"); // Cyan color for the title
    printf("\033[1;33mBasic pay : %.0f\033[0m\n", basicPay); // Yellow color for the basic pay
    printf("\033[1;33mHouse Rent (40%%) : %.0f\033[0m\n", houseRent); // Yellow color for house rent
    printf("\033[1;33mMedical Allowance (18%%) : %.0f\033[0m\n", medicalAllowance); // Yellow color for medical allowance
    printf("\033[1;33mComputer Allowance (15%%) : %.0f\033[0m\n", computerAllowance); // Yellow color for computer allowance
    printf("\033[1;33m-----------------------------------------------------------------------------\033[0m\n"); // Yellow color for the separator line
    printf("\033[1;34mTotal pay: %.0f\033[0m\n", totalPay); // Blue color for the total pay

    return 0;
}
