#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    int upper, lower, increase;

    lower = 0;
    upper = 340;
    increase = 20;
    printf("Fahrenheit to Celsius\n");
    fahrenheit = lower;
    while (fahrenheit <= upper) {
        celsius = 5.0/9.0 * (fahrenheit-32);
        printf("%3.0f\t%3.2f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + increase;

    }
    return 0;
}