/**
 * copy input to output and replace each string of one or more blanks by a single blank
 */
#include <stdio.h>

#define SPACE 1
#define NO_SPACE 0

int main()
{
    int c, prev_c;

    prev_c = NO_SPACE;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (prev_c == NO_SPACE)
            {
                prev_c = SPACE;
                putchar(c);
            }
        }
        else
        {
            prev_c = NO_SPACE;
            putchar(c);
        }
    }
}