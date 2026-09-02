#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    fprintf(file, "Hello from C file handling!\n");

    fclose(file);

    printf("Data written successfully.\n");

    return 0;
}
