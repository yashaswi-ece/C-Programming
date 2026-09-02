#include <stdio.h>

union Data {
    int number;
    float decimal;
    char character;
};

int main() {
    union Data data;

    data.number = 10;
    printf("Integer: %d\n", data.number);

    data.decimal = 20.5;
    printf("Float: %.2f\n", data.decimal);

    data.character = 'A';
    printf("Character: %c\n", data.character);

    return 0;
}
