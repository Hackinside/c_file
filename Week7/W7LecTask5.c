#include <stdio.h>

int main() {
    double temperatures[5]; 
    double sum = 0.0;
    int numElements = 5;

    printf("Enter five temperature values:\n");
    for (int i = 0; i < numElements; i++) {
        printf("Temperature %d: ", i + 1);
        scanf("%lf", &temperatures[i]);
        sum += temperatures[i];
    }

    double average = sum / numElements;

    printf("\nAverage temperature: %.2f\n", average);

    return 0;
}
