#include <stdio.h>

int main(){

    int c;
    int d;

    while (d = ((c = getchar()) != EOF))
        printf("%d", d);

    printf("%d\n", d);
    return(0);
    
}