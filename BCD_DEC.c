#include <stdio.h>

#define SIZE 8  // 8-bit numbers

// Function to calculate power of 2
int power(int n) {
    int result = 1;
    for (int i = 0; i < n; i++)
        result *= 2;
    return result;
}

// Convert binary array (LSB first) to decimal
int binToDeci(int a[]) {
    int num = 0;
    for (int i = 0; i < SIZE; i++) {
        num += a[i] * power(i);  // LSB is at index 0
    }
    return num;
}

// Convert decimal to binary and print
void deciToBin(int num) {
    int bin[SIZE] = {0};
    int i = SIZE - 1;

    while (num > 0 && i >= 0) {
        bin[i] = num % 2;
        num = num / 2;
        i--;
    }

    printf("Binary (MSB first): ");
    for (i = 0; i < SIZE; i++) {
        printf("%d", bin[i]);
    }
    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nChoose conversion:\n");
        printf("1) Binary to Decimal\n");
        printf("2) Decimal to Binary\n");
        printf("0) Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 0) break;

        if (choice == 1) {
            int arr[SIZE];
            printf("Enter 8-bit binary number (LSB first, space separated):\n");
            for (int i = 0; i < SIZE; i++) {
                scanf("%d", &arr[i]);
            }

            printf("Binary array entered: ");
            for (int i = 0; i < SIZE; i++) {
                printf("%d", arr[i]);
            }
            printf("\n");

            int decimal = binToDeci(arr);
            printf("Decimal value: %d\n", decimal);
        }
        else if (choice == 2) {
            int number;
            printf("Enter decimal number (0-255): ");
            scanf("%d", &number);

            if (number < 0 || number > 255) {
                printf("Invalid input! Enter 0-255 only.\n");
                continue;
            }

            deciToBin(number);
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
