
#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;
    int result;

    // Demonstrating operator precedence
    result = a + b * c;
    printf("Precedence (10 + 5 * 2) = %d\n", result);

    // Demonstrating the use of parentheses
    result = (a + b) * c;
    printf("Parentheses ((10 + 5) * 2) = %d\n", result);

    // Demonstrating left-to-right associativity
    result = a - b - c;
    printf("Left-to-right (10 - 5 - 2) = %d\n", result);

    // Demonstrating right-to-left associativity
    result = a = b = c;
    printf("Right-to-left (a = b = c): a = %d\n", a);

    return 0;
}
