/**
 * word count
 */
#include <stdio.h>

#define IN 0 /*inside a word*/
#define OUT 1 /*outside a word*/

int main()
{
    int c, nl, nw, nc, state;
    nl = nw = nc = 0;

    // count lines. words and character in input
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            nl++;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (c == OUT) {
            state = IN;
            nw++;
        }
        nc++;

    }
    printf("%d %d %d", nl, nw, nc);
}