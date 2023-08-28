#include <stdio.h>

int main() {
    char character;

    printf("\033[1;32mEnter any Character ? \033[0m");
    scanf("%c", &character);

    int asciiValue = (int)character;

    printf("\033[1;33mASCII Value of %c character is : %d\033[0m\n", character, asciiValue); // Yellow color for the ASCII value

    return 0;
}
