#include <stdio.h>

int main() {
    int amount;

    printf("\033[1;32mEnter any amount? \033[0m");
    scanf("%d", &amount);

    int denominations[] = {500, 100, 50, 20, 10, 5, 2, 1};
    int count[8] = {0};

    printf("\033[1;33mOutput:\033[0m\n");
    for (int i = 0; i < 8; i++) {
        count[i] = amount / denominations[i];
        amount %= denominations[i];
    }

    for (int i = 0; i < 8; i++) {
        printf("\033[1;34m%d\033[0m ", denominations[i]); // Blue color for the denominations
    }
    printf("\n");

    for (int i = 0; i < 8; i++) {
        printf("\033[1;35m%d\033[0m ", count[i]); // Magenta color for the coin count
    }
    printf("\n");

    return 0;
}
