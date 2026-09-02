#include <stdio.h>
#include <string.h>

int main() {
    char first[50] = "Hello";
    char second[50] = "World";

    printf("Length of first string: %lu\n", strlen(first));

    strcat(first, " ");
    strcat(first, second);

    printf("Combined string: %s\n", first);

    return 0;
}
