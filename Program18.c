#include <stdio.h>

#define MAX_EMPLOYEES 50

struct Employee {
    int empId;
    char name[50];
    float salary;
};

int main(void) {
    struct Employee employees[MAX_EMPLOYEES];
    int n, i;

    printf("Enter number of employees: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_EMPLOYEES) {
        printf("Enter a number from 1 to %d.\n", MAX_EMPLOYEES);
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Employee ID: ");
        if (scanf("%d", &employees[i].empId) != 1) return 1;
        printf("Name: ");
        if (scanf("%49s", employees[i].name) != 1) return 1;
        printf("Salary: ");
        if (scanf("%f", &employees[i].salary) != 1) return 1;
    }

    printf("\n--- Employee Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID : %d\n", employees[i].empId);
        printf("Name : %s\n", employees[i].name);
        printf("Salary : %.2f\n", employees[i].salary);
    }
    return 0;
}
