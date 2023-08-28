#include <stdio.h>

int main() {
    int seconds, minutes, hours;

    printf("\033[1;32mInput Seconds? \033[0m");
    scanf("%d", &seconds);

    minutes = seconds / 60;
    seconds %= 60;
    hours = minutes / 60;
    minutes %= 60;

    printf("\033[1;33mHours Minutes Seconds\n"); // Yellow color for the header
    printf("\033[1;34m%d %d %d\n", hours, minutes, seconds); // Blue color for the result

    return 0;
}
