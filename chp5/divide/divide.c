#include <stdio.h>

int main(void)
{
    printf("Integer division: 5/4 is %d \n", 5/4);
    printf("Integer division: 6/3 is %d \n", 6/3);
    printf("Integer division: 7/4 is %d \n", 7/4);
    printf("floating division: 7./4. is %1.2f \n", 7./4.);
    printf("mixed division: 7./4 is %1.2f \n", 7./4);
    printf("Error: 0./0. is %1.2f \n", 0./0.);
    // printf("Error: 0/0 is %d \n", 0/0); // Won't even build

    return 0;
}