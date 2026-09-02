#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int target, i, found = 0;

    printf("Enter number to search: ");
    scanf("%d", &target);

    for (i = 0; i < 5; i++) {
        if (numbers[i] == target) {
            printf("Number found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Number not found.\n");
    }

    return 0;
}
