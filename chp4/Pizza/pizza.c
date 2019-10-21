#include <stdio.h>

#define PI 3.14159

int main(void)
{
    float area, circum, radius;

    printf("What is the radius of your pizza? ");
    scanf_s("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;

    printf("Your basic pizza parameters are as follows:\n");
    printf("The area = %1.2f\nThe cirumference = %1.2f\n", area, circum);

    return 0;
}