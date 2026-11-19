#include <stdio.h>

int main(void){
    int valueA = 15;
    int valueB = 17;

    int result = valueA * valueB;

    printf("%i X %i = %i", &valueA, valueB, result);
    return 0;
}