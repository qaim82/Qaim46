#include <stdio.h>

int main() {
    int num1, num2;

    printf("\033[1;32mEnter 1st number = \033[0m");
    scanf("%d", &num1);
    printf("\033[1;32mEnter last number = \033[0m");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int product = num1 * num2;
    int difference = num1 - num2;
    int division = num1 / num2;
    int remainder = num1 % num2;
    int total = sum + product + difference + division + remainder;

    printf("\033[1;33mSum of %d and %d is : %02d\n", num1, num2, sum); // Yellow color for the sum
    printf("\033[1;34mProduct of %d and %d is : %02d\n", num1, num2, product); // Blue color for the product
    printf("\033[1;35mDifference between %d and %d is : %02d\n", num1, num2, difference); // Magenta color for the difference
    printf("\033[1;36mDivision of %d and %d is : %02d\n", num1, num2, division); // Cyan color for the division
    printf("\033[1;37mRemainder of %d and %d is : %02d\n", num1, num2, remainder); // White color for the remainder
    printf("\033[1;33m--------------------------------------------------------------\n"); // Yellow color for the separator line
    printf("\033[1;32mTotal is : %02d\n", total); // Green color for the total

    return 0;
}
