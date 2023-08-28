#include <stdio.h>

int main() {
    int number, reversedNumber = 0;

    printf("\033[1;32mEnter any number? \033[0m");
    scanf("%d", &number);

    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    printf("\033[1;33mReverse of %d is: %d\033[0m\n", number, reversedNumber); // Yellow color for the reversed number

    return 0;
}
