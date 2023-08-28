#include <stdio.h>

int main() {
    int number;

    printf("\033[1;32mPlease enter any one integer number? \033[0m");
    scanf("%d", &number);

    int square = number * number;
    int cube = number * number * number;

    printf("\033[1;33mSquare of %d is : %d\033[0m\n", number, square); // Yellow color for the square
    printf("\033[1;34mCube of %d is : %d\033[0m\n", number, cube); // Blue color for the cube

    return 0;
}
