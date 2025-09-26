#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll_no;
    int age;
    char address[100];
    int marks;
};

int main() {
    struct Student students[15];   // array of 15 students
    int i;

    for (i = 0; i < 15; i++) {
        printf("\n--- Enter details of student %d ---\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);   // single word name

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Address: ");
        scanf("%s", students[i].address);   // single word address

        printf("Marks (out of 100): ");
        scanf("%d", &students[i].marks);
    }

    printf("\n\n--- Student Details ---\n");
    for (i = 0; i < 15; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name      : %s\n", students[i].name);
        printf("Roll No   : %d\n", students[i].roll_no);
        printf("Age       : %d\n", students[i].age);
        printf("Address   : %s\n", students[i].address);
        printf("Marks     : %d\n", students[i].marks);
    }

    return 0;
}
