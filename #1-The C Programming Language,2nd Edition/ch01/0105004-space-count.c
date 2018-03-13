/**
 * count blanks,tabs and newlines
 */
#include <stdio.h>

int main()
{
    int c, nBlank, nTab, nNewline;

    nBlank = 0;
    nTab = 0;
    nNewline = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            nBlank++;
        } else if (c == '\t') {
            nTab++;
        } else if (c == '\n') {
            nNewline++;
        }
    }
    printf("%1d, %1d, %1d", nBlank, nTab, nNewline);
    return 0;
}

// why ctrl+d cannot terminate console input??