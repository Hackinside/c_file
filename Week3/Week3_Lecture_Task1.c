#include <stdio.h>

int main() {
    int choice;

    printf("Enter a number between 1 and 3: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose number one! Excellent pick.\n");
            break;
        case 2:
            printf("Number two it is! A solid choice.\n");
            break;
        case 3:
            printf("Three's the magic number! Well done.\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 3.\n");
            break;
    }

    return 0;
}
