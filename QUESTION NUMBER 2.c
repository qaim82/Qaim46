#include <stdio.h>

int main() {
    int num1, num2;

    printf("\033[1;32mEnter 1st number? \033[0m");
    scanf("%d", &num1);
    printf("\033[1;32mEnter 2nd number? \033[0m");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int product = num1 * num2;

    printf("\033[1;33m---------------------------------------\033[0m\n"); // Yellow color for the separator line
    printf("\033[1;34mSum of %d and %d is : %d\033[0m\n", num1, num2, sum); // Blue color for the sum
    printf("\033[1;35mProduct of %d and %d : %d\033[0m\n", num1, num2, product); // Magenta color for the product
    printf("\033[1;33m---------------------------------------\033[0m\n"); // Yellow color for the separator line

    return 0;
}
