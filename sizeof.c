#include <stdio.h>
#include <stddef.h>

#define my_size(type) ((size_t)((type*)0 + 1) - (size_t)((type*)0))

int main() {
    printf("size of int         : %zu\n", my_size(int));
    printf("size of char        : %zu\n", my_size(char));
    printf("size of float       : %zu\n", my_size(float));
    printf("size of double      : %zu\n", my_size(double));
    printf("size of long double : %zu\n", my_size(long double));
    return 0;
}
