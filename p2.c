#include <stdio.h>

void swap(void *ptr1, void *ptr2, size_t size) {
    char *temp = (char *)malloc(size);  // Allocate temporary memory

    // Copy contents of ptr1 to temp
    memcpy(temp, ptr1, size);

    // Copy contents of ptr2 to ptr1
    memcpy(ptr1, ptr2, size);

    // Copy contents of temp to ptr2
    memcpy(ptr2, temp, size);

    // Free the temporary memory
    free(temp);
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2, sizeof(int));

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    double d1 = 3.14;
    double d2 = 2.71;

    printf("Before swap: d1 = %.2f, d2 = %.2f\n", d1, d2);

    swap(&d1, &d2, sizeof(double));

    printf("After swap: d1 = %.2f, d2 = %.2f\n", d1, d2);

    return 0;
}
