#include <stdio.h>

int main()
{
    int c;
    int previous_was_blank;

    previous_was_blank = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            putchar(c);
            if (previous_was_blank == 1)
            {
                previous_was_blank = 0;
                putchar(' ');
            }
        }

        if (c == ' ')
            previous_was_blank = 1;
    }
return(0);
}