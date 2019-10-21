#include <stdio.h>

int main(void)
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    // OMG that was unexpected! What happened?!?!?!
    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);

    // Everything looks normal here
    printf("%ld %ld\n", n3, n4);

    // Decipher what goes wrong here...
    printf("%ld %ld %ld %ld %ld %ld\n", n1, n2, n3, n4);
    // Hint (A peak at the stack):
    // 00000000000000000000000000000000 ‭01000000000010000000000000000000‬
    // 00000000000000000000000000000000 01000000000010000000000000000000
    // 01110111001101011001010000000000‬ 01001001100101100000001011010010‬
    // %ld only reads four bytes at a time. 
    // floats are stored as doubles and both take up 8 Bytes of memory
    // longs take up four bytes in memory here (interesting...)
    
    return 0;
}