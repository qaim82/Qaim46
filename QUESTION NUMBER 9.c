#include <stdio.h>

int main() {
    int days, years, weeks;

    printf("\033[1;32mInput number of days? \033[0m");
    scanf("%d", &days);

    years = days / 365;
    days %= 365;
    weeks = days / 7;
    days %= 7;

    printf("\033[1;33mYears Weeks Days\n"); // Yellow color for the header
    printf("\033[1;34m%d %d %d\n", years, weeks, days); // Blue color for the result

    return 0;
}
