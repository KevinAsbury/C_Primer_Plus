#include <stdio.h>

int main(void)
{
    printf("%zd\n", sizeof((char)'x'));
    printf("%zd\n", sizeof(+(char)'x'));
    
    bin((unsigned)(char)'x');
    bin((unsigned)(+(char)'x'));

    return 0;
}

void bin(unsigned n) 
{ 
    unsigned i; 
    for (i = 1 << 31; i > 0; i = i / 2) 
        (n & i)? printf("1"): printf("0"); 
    
    printf("\n");
} 