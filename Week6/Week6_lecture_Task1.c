#include <stdio.h>

int main() {
    char itemType;
    int quantity;
    float totalPrice;

    printf("Enter item type (A for Apple, M for Milk, B for Bread): ");
    scanf(" %c", &itemType); 

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if (itemType == 'A' || itemType == 'a') {
        totalPrice = quantity * 2.0;
    } else if (itemType == 'M' || itemType == 'm') {
        totalPrice = quantity * 1.5;
    } else if (itemType == 'B' || itemType == 'b') {
        totalPrice = quantity * 3.0;
    } else {
        printf("Invalid item type.\n");
        return 1; 
    }

    printf("Total price: $%.2f\n", totalPrice);

    return 0;
}