#include <stdio.h>

int bitcount(unsigned x);

int main()
{
    unsigned int n = 01111111111;
    int count = -1;

    count = bitcount(n);

    printf("%d", count);
}

int bitcount(unsigned x)
{
    int b;

    for(b = 0; x != 0; x >>= 1)
    {
        if(x & 01)
        {
            b++;
        }
    }
    return b;
}