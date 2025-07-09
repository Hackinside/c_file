#include <stdio.h>

int main() {
    int gold = 1; // Starting gold coin
    int minutes = 0; // Starting time or could using i = 0; i stand as intaration

    printf("Initial gold: %d coin\n", gold);

    // Loop for 5 minutes
    while (minutes < 5) {
        minutes++; // Increment minute
        gold += 10; // Increase gold by 10
        printf("After %d minute(s): %d gold coins\n", minutes, gold);
    }

    printf("After 5 minutes, you have a total of %d gold coins.\n", gold);

    return 0;
}
