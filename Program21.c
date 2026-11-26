#include <stdio.h>

int main(void) {
    int num;
    int *ptr;

    printf("Enter an integer value: ");
    if (scanf("%d", &num) != 1) return 1;
    ptr = &num;

    printf("\n--- Using the variable directly ---\n");
    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);
    printf("\n--- Using the pointer ---\n");
    printf("Value via ptr (*ptr) = %d\n", *ptr);
    printf("Address stored in ptr = %p\n", (void *)ptr);
    return 0;
}
