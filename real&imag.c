#include <stdio.h>

struct Complex {
    int real;
    int imag;
};

int main() {
    struct Complex c[2];
    struct Complex sum, product;

    // Input 2 complex numbers
    for (int i = 0; i < 2; i++) {
        printf("Enter real and imaginary part of complex number %d: ", i + 1);
        scanf("%d %d", &c[i].real, &c[i].imag);
    }

    // Sum: (a+bi) + (c+di) = (a+c) + (b+d)i
    sum.real = c[0].real + c[1].real;
    sum.imag = c[0].imag + c[1].imag;

    // Product: (a+bi)*(c+di) = (ac - bd) + (ad + bc)i
    product.real = (c[0].real * c[1].real) - (c[0].imag * c[1].imag);
    product.imag = (c[0].real * c[1].imag) + (c[1].real * c[0].imag);

    printf("Sum: %d + %di\n", sum.real, sum.imag);
    printf("Product: %d + %di\n", product.real, product.imag);

    return 0;
}
