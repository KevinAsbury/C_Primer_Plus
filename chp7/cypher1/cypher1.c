/* cypher1.c -- alters input, preserving spaces */
#include <stdio.h>
#include <ctype.h> // for isalpha()

int main(void)
{
    char ch;

    while ((ch = getchar()) != '\n')  // While not end of line
    {
        if (isalpha(ch))
            putchar(ch + 1); // change the character
        else
            putchar(ch); // leave space unchanged
    }

    putchar(ch);
    
    return 0;
}