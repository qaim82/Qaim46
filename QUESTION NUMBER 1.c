#include <stdio.h>

int main() {
    char name[] = "\033[1;35mAslam\033[0m"; // Magenta color for the name
    char fatherName[] = "\033[1;36mGhulam Murtaza\033[0m"; // Cyan color for the father's name
    int age = 25;
    char grade = 'A';

    printf("\033[1;33mName: %s\033[0m\n", name); // Yellow color for the label
    printf("\033[1;33mFather's Name: %s\033[0m\n", fatherName);
    printf("\033[1;33mAge: %d years\033[0m\n", age);
    printf("\033[1;33mGrade: %c\033[0m\n", grade);

    return 0;
}
