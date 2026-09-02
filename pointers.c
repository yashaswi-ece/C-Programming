#include <stdio.h>

int main()
{
    int number;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &number);

    ptr = &number;

    printf("Value of number = %d\n", number);
    printf("Address of number = %p\n", (void *)&number);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}
