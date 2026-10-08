#include <stdio.h>

// (a) No arguments and no return value
void area1(void)
{
    float base, height;

    printf("\nEnter base and height: ");
    scanf("%f %f", &base, &height);

    printf("Area (No arguments, no return value) = %.2f\n",
           0.5f * base * height);
}

// (b) Arguments but no return value
void area2(float base, float height)
{
    printf("Area (Arguments, no return value) = %.2f\n",
           0.5f * base * height);
}

// (c) No arguments but returns a value
float area3(void)
{
    float base, height;

    printf("\nEnter base and height: ");
    scanf("%f %f", &base, &height);

    return 0.5f * base * height;
}

// (d) Arguments and returns a value
float area4(float base, float height)
{
    return 0.5f * base * height;
}

int main(void)
{
    float base, height, result;

    // (a)
    area1();

    // (b)
    printf("\nEnter base and height: ");
    scanf("%f %f", &base, &height);
    area2(base, height);

    // (c)
    result = area3();
    printf("Area (No arguments, returns a value) = %.2f\n",
           result);

    // (d)
    printf("\nEnter base and height: ");
    scanf("%f %f", &base, &height);
    result = area4(base, height);
    printf("Area (Arguments and returns a value) = %.2f\n",
           result);

    return 0;
}