#include <stdio.h>

#define OUT 0
#define IN 1

int main()
{
    int c;
    int nchar;
    int previous_blank;

    previous_blank = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && previous_blank == 0)
        {
            putchar('\n');
            previous_blank = 1;
        }
        if (c != ' ')
        {
            putchar(c);
            previous_blank = 0;
        }
    }
return(0);
}