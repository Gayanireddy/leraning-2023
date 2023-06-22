#include <stdio.h>

void printExponent(double num) {
    unsigned long long *ptr = (unsigned long long *)&num;  // Type punning

    unsigned long long bits = *ptr;
    unsigned long long exponent = (bits >> 52) & 0x7FF;

    printf("Exponent in Hexadecimal: 0x%llX\n", exponent);
    
    printf("Exponent in Binary: 0b");
    for (int i = 10; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}