#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    int i;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int num;

    printf("Enter a non-negative integer (0-20): ");
    scanf("%d", &num);

    if (num < 0 || num > 20) {
        printf("Please enter a number between 0 and 20.\n");
    } else {
        printf("Factorial of %d = %llu\n", num, factorial(num));
    }

    return 0;
}
