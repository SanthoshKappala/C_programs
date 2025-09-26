#include <stdio.h>

int main() {
    unsigned int number;
    unsigned int swapped;

    printf("Enter a 32-bit number in hex (e.g. 12345678): 0x");
    scanf("%x", &number);   // user enters hex value without "0x"

    // Byte swap logic
    swapped = ((number >> 24) & 0x000000FF) |
              ((number >> 8)  & 0x0000FF00) |
              ((number << 8)  & 0x00FF0000) |
              ((number << 24) & 0xFF000000);

    printf("Original : 0x%08X\n", number);
    printf("Swapped  : 0x%08X\n", swapped);

    return 0;
}
