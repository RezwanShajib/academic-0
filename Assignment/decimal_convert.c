#include <stdio.h>

// Function to convert and print in a given base
void decimalConv(int num, int base) {
    char result[65];  // Enough for 64-bit binary
    int index = 0;

    if (num == 0) {
        printf("0");
        return;
    }

    while (num > 0) {
        int rem = num % base;
        if (rem < 10)
            result[index] = rem + '0';
        else
            result[index] = rem - 10 + 'A'; // For hexadecimal A–F
        num /= base;
        index++;
    }

    // Print the result in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
}

int main() {
    int num;

    printf("Enter a decimal num: ");
    scanf("%d", &num);

    printf("Binary      : ");
    decimalConv(num, 2);
    printf("\n");

    printf("Octal       : ");
    decimalConv(num, 8);
    printf("\n");

    printf("Hexadecimal : ");
    decimalConv(num, 16);
    printf("\n");

    return 0;
}
