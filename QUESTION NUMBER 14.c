#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("\033[1;32mEnter any number? \033[0m");
    scanf("%d", &number);

    int originalNumber = number;

    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("\033[1;33mSum of digits of %d = %d\033[0m\n", originalNumber, sum); // Yellow color for the sum of digits

    return 0;
}
