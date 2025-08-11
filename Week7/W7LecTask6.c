#include <stdio.h>

int main() {
    char experiments[5]; 
    float results[5];    
    int numExperiments = 5;

    printf("Enter experiment IDs and results:\n");
    for (int i = 0; i < numExperiments; i++) {
        printf("Experiment %d ID: ", i + 1);
        scanf(" %c", &experiments[i]); 
        printf("Result for experiment %c: ", experiments[i]);
        scanf("%f", &results[i]);
    }

    printf("\nExperiment Results:\n");
    for (int i = 0; i < numExperiments; i++) {
        printf("The result of experiment %c is %.1f\n", experiments[i], results[i]);
    }

    return 0;
}
