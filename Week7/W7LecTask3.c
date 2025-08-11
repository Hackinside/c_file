#include <stdio.h>

int main() {
    double temperatures[] = {25.5, 26.0, 24.9, 27.1, 23.8, 25.0, 26.5};
    double sum = 0.0;

    for (int i = 0; i < 7; i++) {
        sum += temperatures[i];
    }

    printf("Total sum of temperatures: %.2f\n", sum);

    return 0;
}
