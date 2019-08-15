#include <stdio.h>
#include <string.h>

#define PRAISE "What a super marvelous name!"

int main(void)
{
    char name[40];

    printf("What is your name?\n");
    scanf_s("Name: %s", name);

    printf("You name contains %llu letters and takes of %llu bytes of memory.\n", strlen(name), sizeof(name));
    printf("The PRAISE phrase is %llu letters and takes up %llu bytes of memory.\n", strlen(PRAISE), sizeof(PRAISE));

    return 0;
}