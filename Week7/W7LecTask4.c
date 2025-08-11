#include <stdio.h>

int main() {
    double temperatures[] = {25.5, 26.0, 24.9, 27.1, 23.8, 25.0, 26.5};
    double sum = 0.0;
    int numElements = sizeof(temperatures) / sizeof(temperatures[0]);

    for (int i = 0; i < numElements; i++) {
        sum += temperatures[i];
    }

    double average = sum / numElements;

    printf("Average temperature: %.2f\n", average);

    return 0;
}
