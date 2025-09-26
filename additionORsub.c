#include <stdio.h>

int add(int a, int b) {
    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int sub(int a, int b) {
    return add(a, add(~b, 1));
}

int main() {
    int a, b;
    printf("Enter two numbers separated by space: ");
    scanf("%d %d", &a, &b);

    int sum = add(a, b);
    printf("Addition: %d\n", sum);

    int difference = sub(a, b);
    printf("Subtraction: %d\n", difference);

    return 0;
}
