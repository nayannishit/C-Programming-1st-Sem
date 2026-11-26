#include <stdio.h>

int main(void) {
    FILE *fp;
    int rollNo;
    char name[50];
    float marks;

    printf("Enter Roll No: ");
    if (scanf("%d", &rollNo) != 1) return 1;
    printf("Enter Name: ");
    if (scanf("%49s", name) != 1) return 1;
    printf("Enter Marks: ");
    if (scanf("%f", &marks) != 1) return 1;

    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        perror("Error opening student.txt for writing");
        return 1;
    }
    fprintf(fp, "%d %s %.2f\n", rollNo, name, marks);
    fclose(fp);
    printf("\nStudent details saved to file successfully.\n");

    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        perror("Error opening student.txt for reading");
        return 1;
    }
    if (fscanf(fp, "%d %49s %f", &rollNo, name, &marks) != 3) {
        fprintf(stderr, "Could not read student details from the file.\n");
        fclose(fp);
        return 1;
    }
    fclose(fp);

    printf("\n--- Data Read From File ---\n");
    printf("Roll No : %d\n", rollNo);
    printf("Name : %s\n", name);
    printf("Marks : %.2f\n", marks);
    return 0;
}
