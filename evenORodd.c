#include <stdio.h>

int main() {
    int number;
    printf("Enter the number:\n");
    scanf("%d", &number);

    if ((number & 1) == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }

    return 0;
}
