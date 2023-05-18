#include <stdio.h>

int main()
{
    int c;
    long nblanks, ntabs, nlines;
    nblanks = 0;
    ntabs = 0;
    nlines = 0;

    while ((c = getchar()) != EOF)
        {
        if (c == '\n')
            ++nlines;
        if (c == '\t')
            ++ntabs;
        if (c == ' ')
            ++nblanks;
        }
    printf("%d - %d - %d\n", nlines, ntabs, nblanks);
    return(0);
}