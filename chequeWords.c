#include <stdio.h>

void convert_words(int n) {
    char *ones[] = {"", "one", "two", "three", "four", "five", "six",
                    "seven", "eight", "nine", "ten", "eleven", "twelve",
                    "thirteen", "fourteen", "fifteen", "sixteen",
                    "seventeen", "eighteen", "nineteen"};

    char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty",
                    "sixty", "seventy", "eighty", "ninety"};

    if (n == 0) {
        printf("zero");
        return;
    }

    if (n >= 1000) {
        printf("%s thousand ", ones[n / 1000]);
        n %= 1000;
    }

    if (n >= 100) {
        printf("%s hundred ", ones[n / 100]);
        n %= 100;
    }

    if (n >= 20) {
        printf("%s ", tens[n / 10]);
        n %= 10;
    }

    if (n > 0) {
        printf("%s", ones[n]);
    }
}

int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("negative ");
        number = -number;   // make it positive for conversion
    }

    convert_words(number);

    return 0;
}
