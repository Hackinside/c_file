#include <stdio.h>

int main() {
    int option;

    printf("Choose an option from the menu:\n");
    printf("1. Chiken\n");
    printf("2. Beef\n");
    printf("3. Pork\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("You selected Chicken.\n");
            break;
        case 2:
            printf("You selected Beef.\n");
            break;
        case 3:
            printf("You selected Pork.\n");
            break;
        default:
            printf("Invalid option. Please choose a number between 1 and 3.\n");
            break;
    }
    printf("\nChoose a shape to calculate its area:\n");
    printf("1. Triangle\n");
    printf("2. Rectangle\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    switch (option) {
        case 1: {
            float base, height;
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            printf("The area of the triangle is: %.2f\n", 0.5 * base * height);
            break;
        }
        case 2: {
            float length, width;
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            printf("The area of the rectangle is: %.2f\n", length * width);
            break;
        }
        default:
            printf("Invalid option. Please choose a number between 1 and 2.\n");
            break;
    }

    return 0;
}
