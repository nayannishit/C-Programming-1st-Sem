
#include <stdio.h>

int main() {
    int arr[100];
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Please enter a size between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d array elements:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
