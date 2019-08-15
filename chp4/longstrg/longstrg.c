#include <stdio.h>

int main(void)
{
    printf("Here's one way to print a ");
    printf("long string. \n");
    printf("Here's another way to print a \
long string.\n");
    printf("Here's the newest way to print a "
            "long string.\n\n");

    printf("\
This is a lot of text:\n\
\n\
Lorem ipsum dolor sit amet, consectetur adipiscing elit,\n\
sed do eiusmod tempor incididunt ut labore et dolore\n\
magna aliqua. Ut enim ad minim veniam, quis nostrud\n\
exercitation ullamco laboris nisi ut aliquip ex ea\n\
commodo consequat. Duis aute irure dolor in reprehenderit\n\
in voluptate velit esse cillum dolore eu fugiat\n\
nulla pariatur. Excepteur sint occaecat cupidatat non\n\
proident, sunt in culpa qui officia deserunt mollit\n\
anim id est laborum.\n");

    return 0;
}