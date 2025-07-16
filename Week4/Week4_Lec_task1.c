#include <stdio.h>

int main() {
    int choice;
    int i = 0; // Iteration variable

    while (i == 0) { // Loop continues as long as i is 0 (user wants to continue)
        printf("Enter a number (1 to continue): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You chose to continue! Great!\n");
                // i remains 0 to continue the loop
                break;
            case 2:
                printf("You chose number two. Interesting choice.\n");
                i = 1; // Set i to 1 to exit the loop
                break;
            case 3:
                printf("Number three! The loop will now end.\n");
                i = 1; // Set i to 1 to exit the loop
                break;
            default:
                printf("Invalid choice. Please enter 1, 2, or 3.\n");
                // i remains 0 to continue the loop
                break;
        }
    }

    printf("Loop finished.\n");

    return 0;
}
