#include <stdio.h>

int main() {
    char name[100], seatNo[100];
    int marks[4], totalMarks = 0;
    float percentage;

    printf("\033[1;32mEnter name of Student? \033[0m");
    scanf("%s", name);
    printf("\033[1;32mEnter Seat No? \033[0m");
    scanf("%s", seatNo);

    printf("\033[1;32mEnter marks of English? \033[0m");
    scanf("%d", &marks[0]);
    printf("\033[1;32mEnter marks of Basic Electronics? \033[0m");
    scanf("%d", &marks[1]);
    printf("\033[1;32mEnter marks of Mathematics? \033[0m");
    scanf("%d", &marks[2]);
    printf("\033[1;32mEnter marks of Computer Programming? \033[0m");
    scanf("%d", &marks[3]);

    for (int i = 0; i < 4; i++) {
        totalMarks += marks[i];
    }

    percentage = (float)totalMarks / 4.0;

    printf("\033[1;36m\nMARKSHEET\n\033[0m"); // Cyan color for the title
    printf("\033[1;33mName: %s Seat No: %s\n", name, seatNo); // Yellow color for the name and seat no
    printf("------------------------------------------------------------\n");
    printf("\n\033[1;34mSubjects\tMarks\n"); // Blue color for the Subjects and Marks heading
    printf("-----------------------------------------------------\n");
    printf("1. English\t%d\n", marks[0]);
    printf("2. Basic Electronics\t%d\n", marks[1]);
    printf("3. Mathematics\t%d\n", marks[2]);
    printf("4. Computer Programming\t%d\n", marks[3]);
    printf("\033[1;33m-----------------------------------------------\n");
    printf("Total : %d\tPercentage: %.2f\033[0m\n", totalMarks, percentage); // Yellow color for the Total and Percentage

    return 0;
}
