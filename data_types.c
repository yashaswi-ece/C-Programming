#include <stdio.h>

int main() {
    int number = 10;
    char letter = 'A';
    float decimal = 5.5;
    double value = 25.6789;

    printf("Integer = %d\n", number);
    printf("Character = %c\n", letter);
    printf("Float = %.1f\n", decimal);
    printf("Double = %.4lf\n", value);

    return 0;
}
