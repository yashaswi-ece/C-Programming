#include <stdio.h>

int main() {
    int numbers[5] = {40, 10, 50, 20, 30};
    int i, j, temp;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Sorted numbers:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
