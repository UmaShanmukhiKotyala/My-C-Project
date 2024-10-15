#include <stdio.h>

int main() {
    int decimalNumber, binaryNumber = 0, remainder, base = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    while (decimalNumber != 0) {
        remainder = decimalNumber % 2;
        binaryNumber += remainder * base;
        base *= 10;
        decimalNumber /= 2;
    }

    printf("The binary equivalent of %d is %d\n", decimalNumber, binaryNumber);

    return 0;
}
