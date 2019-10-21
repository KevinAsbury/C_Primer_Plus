#include <stdio.h>

int main(void)
{
    printf("\n");
    printf("C's %% operand:\n");
    printf("  11 %% 5 is: % d\n", 11 % 5);
    printf(" 11 %% -5 is: % d\n", 11 % -5);
    printf(" -11 %% 5 is: % d\n", -11 % 5);
    printf("-11 %% -5 is: % d\n", -11 % -5);

    printf("\n");
    printf("Manual calculation (check):\n");

    printf("    11 - ((11/5)*5) is: % d\n", 11 - ((11/5)*5));
    printf("  11 - ((11/-5)*-5) is: % d\n", 11 - ((11/-5)*-5));
    printf("  -11 - ((-11/5)*5) is: % d\n", -11 - ((-11/5)*5));
    printf("-11 - ((-11/-5)*-5) is: % d\n", -11 - ((-11/-5)*-5));

    return 0;
}