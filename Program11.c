
#include <stdio.h>

int main() {
    int i;
    int intArr[3];
    float floatArr[3];
    char charArr[3];

    printf("Enter 3 integer elements:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &intArr[i]);
    }

    printf("\nEnter 3 float elements:\n");
    for (i = 0; i < 3; i++) {
        scanf("%f", &floatArr[i]);
    }

    printf("\nEnter 3 character elements:\n");
    for (i = 0; i < 3; i++) {
        scanf(" %c", &charArr[i]);
    }

    printf("\nInteger Array:\n");
    for (i = 0; i < 3; i++) {
        printf("Value = %d, Address = %p\n",
               intArr[i], (void *)&intArr[i]);
    }

    printf("\nFloat Array:\n");
    for (i = 0; i < 3; i++) {
        printf("Value = %.2f, Address = %p\n",
               floatArr[i], (void *)&floatArr[i]);
    }

    printf("\nCharacter Array:\n");
    for (i = 0; i < 3; i++) {
        printf("Value = %c, Address = %p\n",
               charArr[i], (void *)&charArr[i]);
    }

    return 0;
}
