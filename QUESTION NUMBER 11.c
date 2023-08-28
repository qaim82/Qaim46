#include <stdio.h>

int main() {
    int number;
    int digit1, digit2, digit3, digit4, digit5;
    int sum;

    printf("\033[1;32mPlease enter five-digit number ? \033[0m");
    scanf("%d", &number);

    digit5 = number % 10;
    number /= 10;
    digit4 = number % 10;
    number /= 10;
    digit3 = number % 10;
    number /= 10;
    digit2 = number % 10;
    number /= 10;
    digit1 = number % 10;

    sum = digit1 + digit2 + digit3 + digit4 + digit5;

    printf("\033[1;33mSeparated from one another by three spaces: %d   %d   %d   %d   %d\n", digit1, digit2, digit3, digit4, digit5); // Yellow color for the separated digits
    printf("\033[1;34mSum of five digits: %d\n", sum); // Blue color for the sum

    return 0;
}
