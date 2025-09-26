#include <stdio.h>

// Function to print binary (for visualization)
void printBinary(int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int setbit(int num, int posi_set) {
    return num | (1 << posi_set);
}

int clearbit(int num, int posi_clear) {
    return num & (~(1 << posi_clear));
}

int main() {
    int number, position_set, position_clear;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Binary before: ");
    printBinary(number);

    printf("Enter the position to set: ");
    scanf("%d", &position_set);

    printf("Enter the position to clear: ");
    scanf("%d", &position_clear);

    int setnumber = setbit(number, position_set);
    printf("After setting bit %d : %d\nBinary: ", position_set, setnumber);
    printBinary(setnumber);

    int clearnumber = clearbit(number, position_clear);
    printf("After clearing bit %d : %d\nBinary: ", position_clear, clearnumber);
    printBinary(clearnumber);

    return 0;
}
