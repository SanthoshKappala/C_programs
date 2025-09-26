#include <stdio.h>

int main() {
    unsigned int number;
    printf("Enter a 32-bit hexadecimal value (e.g., 12345678):\n0x");
    scanf("%x", &number);

    unsigned int byte1 = (number >> 24) & 0xFF;
    unsigned int byte2 = (number >> 16) & 0xFF;
    unsigned int byte3 = (number >> 8) & 0xFF;
    unsigned int byte4 = number & 0xFF;

    printf("Bytes (MSB to LSB): %02X\t%02X\t%02X\t%02X\n", byte1, byte2, byte3, byte4);

    return 0;
}
