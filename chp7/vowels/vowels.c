#include <stdio.h>

int main(void)
{
    char ch;
    int a_ct, e_ct, i_ct, o_ct, u_ct;

    a_ct = e_ct = i_ct = o_ct = u_ct = 0;

    printf("Enter some text; enter # to quit. \n");

    // You can avoid multiple cases by using
    // ch = toupper(ch); or switch(touppoer(ch))
    // This is just a demostration that you can use multiple cases
    while((ch = getchar()) !='#')
    {
        switch (ch)
        {
            case 'a':
            case 'A':
                a_ct++;
                break;
            case 'e':
            case 'E':
                e_ct++;
                break;
            case 'i':
            case 'I':
                i_ct++;
                break;
            case 'o':
            case 'O':
                o_ct++;
                break;
            case 'u':
            case 'U':
                u_ct++;
                break;
            default:
                break;
        }
    }
    printf("number of vowels:   A    E    I    O    U\n");
        printf("                 %4d %4d %4d %4d %4d\n",
                a_ct, e_ct, i_ct, o_ct, u_ct);
    
    return 0;
}