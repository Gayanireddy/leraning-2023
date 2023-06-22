#include <stdio.h>

int findLargestIfElse(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int findLargestTernary(int num1, int num2) {
    int largest = (num1 > num2) ? num1 : num2;
    return largest;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int largestIfElse = findLargestIfElse(num1, num2);
    printf("Using if-else: %d\n", largestIfElse);

    int largestTernary = findLargestTernary(num1, num2);
    printf("Using ternary operator: %d\n", largestTernary);

    return 0;
}
