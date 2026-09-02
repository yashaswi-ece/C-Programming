#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s1;

    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
