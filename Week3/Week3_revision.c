#include <stdio.h>

int main() {
    int num_processors;
    float price_per_processor;
    float discount_rate = 0.0;
    float total_value;

    printf("Enter the number of processors: ");
    scanf("%d", &num_processors);

    printf("Enter the price per processor: ");
    scanf("%f", &price_per_processor);

    if (num_processors >= 0 && num_processors <= 19) {
        discount_rate = 0.0;
    } else if (num_processors >= 20 && num_processors <= 99) {
        discount_rate = 0.05; // 5% discount
    } else if (num_processors >= 100) {
        discount_rate = 0.10; // 10% discount
    } else {
        printf("Invalid number of processors.\n");
        return 1; // Indicate an error
    }

    total_value = num_processors * price_per_processor * (1 - discount_rate);

    printf("Total value of the order: GBP %.2f\n", total_value);

    return 0;
}
