/* cypher1.c -- alters input, preserving spaces */
#include <stdio.h>

#define SPACE  ' '

int main(void)
{
    char ch;

    ch = getchar(); // read a character

    while (ch != '\n')  // While not end of line
    {
        if (ch == SPACE)
            putchar(ch); // leave space unchanged
        else
            putchar(ch + 1); // change the character

        ch = getchar(); // get the next character
    }

    putchar(ch);
    
    return 0;
}