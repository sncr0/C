#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define INCREMENT 20

int main(){

int far;
float cel;

for(far = 0; far <= UPPER; far = far + INCREMENT){
    printf("%d\t%f\n", far, 5.0/9.0*(far-32));
}

}