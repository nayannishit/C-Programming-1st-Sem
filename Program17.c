#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main(void) {
    union Data data;

    printf("Size of union Data = %zu bytes\n", sizeof(data));
    data.i = 65;
    printf("\nAfter assigning data.i = 65:\n");
    printf("data.i = %d\n", data.i);
    printf("Address of data.i = %p\n", (void *)&data.i);

    data.f = 3.14f;
    printf("\nAfter assigning data.f = 3.14 (the shared bytes are overwritten):\n");
    printf("data.f = %.2f\n", data.f);
    printf("Address of data.f = %p\n", (void *)&data.f);

    data.c = 'A';
    printf("\nAfter assigning data.c = 'A' (the shared bytes are overwritten):\n");
    printf("data.c = %c\n", data.c);
    printf("Address of data.c = %p\n", (void *)&data.c);
    printf("\nAll members share the same starting address: %p\n", (void *)&data);
    return 0;
}
