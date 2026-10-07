#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;
    double salary;

    printf("Enter an integer: ");
    scanf("%d", &age);

    printf("Enter a float value: ");
    scanf("%f", &height);

    printf("Enter a character: ");
    scanf(" %c", &grade);

    printf("Enter a double value: ");
    scanf("%lf", &salary);

    printf("\n--- Entered Values ---\n");
    printf("Integer: %d\n", age);
    printf("Float: %.2f\n", height);
    printf("Character: %c\n", grade);
    printf("Double: %.2lf\n", salary);

    return 0;
}