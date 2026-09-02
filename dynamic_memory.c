#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *numbers;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    numbers = (int *)malloc(n * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("The numbers are:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    free(numbers);

    return 0;
}
