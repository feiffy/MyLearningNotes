#include <stdio.h>
#include <string.h>

void reverse(char[]);

int main()
{
    char s[] = "hello";
    reverse(s);
    return 0;
}

void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

    printf("%s", s);
}