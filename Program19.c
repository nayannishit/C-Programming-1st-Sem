#include <stdio.h>

int main(void) {
    char str[100];
    int length = 0;
    int i;

    printf("Enter a string: ");
    if (scanf("%99s", str) != 1) return 1;

    /* Count characters without a built-in string function. */
    while (str[length] != '\0') length++;

    printf("Length of the string = %d\n", length);
    printf("Reversed string = ");
    for (i = length - 1; i >= 0; i--) putchar(str[i]);
    putchar('\n');
    return 0;
}
