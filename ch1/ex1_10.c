#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
            printf("\\t");
        if (c == '\b')
            printf("b");
        if (c != '\b')
            if (c != '\t')
                putchar(c);

    }
return(0);
}