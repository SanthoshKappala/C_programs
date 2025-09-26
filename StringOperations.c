#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 100

void stringincase(char *s1, char *s2) {
    if (strcasecmp(s1, s2) == 0) {
        printf("\"%s\" and \"%s\" are identical (case-insensitive).\n", s1, s2);
    } else {
        printf("\"%s\" and \"%s\" are not identical (case-insensitive).\n", s1, s2);
    }
}

void stringcat(char *s1, char *s2) {
    char cat[LEN];
    strcpy(cat, s1);
    strcat(cat, s2);
    printf("After concatenation: %s\n", cat);
}

void substring(char *s1, char *s2) {
    char *p = strstr(s1, s2);
    if (p != NULL) {
        printf("Substring found!\n");
    } else {
        printf("Substring not found.\n");
    }
}

void lowercase(char *s1) {
    for (int i = 0; s1[i] != '\0'; i++) {
        s1[i] = tolower(s1[i]);
    }
    printf("Lowercase: %s\n", s1);
}

void uppercase(char *s1) {
    for (int i = 0; s1[i] != '\0'; i++) {
        s1[i] = toupper(s1[i]);
    }
    printf("Uppercase: %s\n", s1);
}

void reverse(char *s1) {
    int len = strlen(s1);
    for (int i = 0; i < len / 2; i++) {
        char temp = s1[i];
        s1[i] = s1[len - 1 - i];
        s1[len - 1 - i] = temp;
    }
    printf("Reversed string: %s\n", s1);
}

int main() {
    char str1[LEN], str2[LEN];
    int choice;

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    while (1) {
        printf("\nChoose operation:\n");
        printf("1) Case-insensitive compare\n");
        printf("2) Concatenate\n");
        printf("3) Substring search\n");
        printf("4) To lowercase\n");
        printf("5) To uppercase\n");
        printf("6) Reverse string\n");
        printf("7) Length of string\n");
        printf("8) Compare strings\n");
        printf("9) Copy string\n");
        printf("0) Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                stringincase(str1, str2);
                break;
            case 2:
                stringcat(str1, str2);
                break;
            case 3:
                substring(str1, str2);
                break;
            case 4:
                lowercase(str1);
                break;
            case 5:
                uppercase(str1);
                break;
            case 6:
                reverse(str1);
                break;
            case 7:
                printf("Length of \"%s\" = %lu\n", str1, strlen(str1));
                break;
            case 8:
                if (strcmp(str1, str2) == 0)
                    printf("Strings are exactly equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;
            case 9:
                strcpy(str1, str2);
                printf("After copy, str1 = %s\n", str1);
                break;
            case 0:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
