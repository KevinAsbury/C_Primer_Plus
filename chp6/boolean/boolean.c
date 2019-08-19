#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("Please enter an integer to summed ");
    printf("(q to quit): ");
    input_is_good = scanf_s("%ld", &num);

    while(input_is_good)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        input_is_good = scanf_s("%ld", &num);
    }

    printf("Those integers sum to %ld.\n", sum);

    return 0;
}