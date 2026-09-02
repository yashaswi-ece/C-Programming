#include <stdio.h>

enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};

int main() {
    enum Day today;

    today = WEDNESDAY;

    printf("Day number: %d\n", today);

    return 0;
}
