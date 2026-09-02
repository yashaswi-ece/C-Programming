#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Hello, %s!\n", name);
    printf("Length of your name: %lu\n", strlen(name));

    return 0;
}
