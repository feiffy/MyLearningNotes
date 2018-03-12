/**
 * count characters in input
 */
#include <stdio.h>

int main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        nc++;
    printf("%ld\n", nc);


    /** the for version*/
    // for (nc = 0; getchar() != EOF; ++nc);
}


// Notes: press 'Enter' then 'Ctrl+D' to terminate input