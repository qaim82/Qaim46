#include <stdio.h>

int main() {
    int N1, N2, temp;

    printf("\033[1;32mEnter value of N1 ? \033[0m");
    scanf("%d", &N1);
    printf("\033[1;32mEnter value of N2 ? \033[0m");
    scanf("%d", &N2);

    temp = N1;
    N1 = N2;
    N2 = temp;

    printf("\033[1;33mValue of N1 is : %d\n", N1); // Yellow color for the N1 value
    printf("Value of N2 is : %d\n", N2); // Default color for the N2 value

    return 0;
}
