#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks[3];
};

int main(void) {
    struct Student student;
    float total = 0.0f;
    float average;
    int i;

    printf("Enter roll number: ");
    if (scanf("%d", &student.rollNo) != 1) return 1;
    printf("Enter name: ");
    if (scanf("%49s", student.name) != 1) return 1;
    printf("Enter marks in 3 subjects: ");
    for (i = 0; i < 3; i++) {
        if (scanf("%f", &student.marks[i]) != 1) return 1;
        total += student.marks[i];
    }

    average = total / 3.0f;
    printf("\n--- Student Details ---\n");
    printf("Roll Number : %d\n", student.rollNo);
    printf("Name : %s\n", student.name);
    printf("Marks : %.2f, %.2f, %.2f\n", student.marks[0], student.marks[1], student.marks[2]);
    printf("Total Marks : %.2f\n", total);
    printf("Average : %.2f\n", average);
    return 0;
}
