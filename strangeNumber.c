#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int digitsArePrime(int n) {
    int digit;
    while (n > 0) {
        digit = n % 10;
        if (!isPrime(digit))   // reuse isPrime() for digits
            return 0;
        n /= 10;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num) && digitsArePrime(num)) {
        printf("it is a strange number\n");
    } else {
        printf("not a strange number\n");
    }

    return 0;
}
