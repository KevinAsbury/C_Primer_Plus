#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("Here are some number limits for this system:\n");
    printf("The largest int value is: %d\n", INT_MAX);
    printf("The smallest long long is: %lld\n", LLONG_MIN);
    printf("A byte on this sytem is equal to %d bits.\n", CHAR_BIT);
    printf("Largest Double: %e\n", DBL_MAX);
    printf("Smallest Float: %e\n", FLT_MIN);
    printf("Float percision: %d\n", FLT_DIG);
    printf("Float epsilon: %e\n", FLT_EPSILON);

    return 0;
}