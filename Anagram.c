#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 100

int anagram(const char *s1, const char *s2) {
    int count[256] = {0};

    if (strlen(s1) != strlen(s2)) {
        return 0;
    }

    for (int i = 0; s1[i] != '\0'; i++) {
        count[(unsigned char)tolower(s1[i])]++;  // normalize to lowercase
    }
    for (int i = 0; s2[i] != '\0'; i++) {
        count[(unsigned char)tolower(s2[i])]--;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0)
            return 0;
    }
    return 1;
}

int main() {
    char str1[LEN], str2[LEN];

    printf("Enter first string: ");
    scanf("%s", str1);   // removed &

    printf("Enter second string: ");
    scanf("%s", str2);

    if (anagram(str1, str2)) {
        printf("The given strings are anagrams.\n");
    } else {
        printf("The given strings are not anagrams.\n");
    }

    return 0;
}
