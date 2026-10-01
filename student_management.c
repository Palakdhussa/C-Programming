#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student student;

    printf("===== Student Information =====\n");

    printf("Enter student name: ");
    scanf(" %[^\n]", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.rollNo);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\n===== Student Details =====\n");
    printf("Name       : %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNo);
    printf("Marks      : %.2f\n", student.marks);

    if (student.marks >= 40) {
        printf("Result     : Pass\n");
    } else {
        printf("Result     : Fail\n");
    }

    return 0;
}
