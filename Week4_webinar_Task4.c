#include <stdio.h>

int main() {
    int age;
    char choice = 'y'; 

    while (choice == 'y' || choice == 'Y') {
        printf("Enter your age: ");

        while (scanf("%d", &age) != 1 || age < 0) {
            printf("Invalid input. Please enter a non-negative number for your age: ");
            while (getchar() != '\n'); 
        }

        double fare;

        if (age < 5) {
            fare = 0.0;
            printf("Bus fare: Free (Children under 5)\n");
        } else if (age >= 65) {
            fare = 1.50; 
            printf("Bus fare: £%.2f (Senior discount)\n", fare);
        } else {
            fare = 2.50;
            printf("Bus fare: £%.2f (Standard fare)\n", fare);
        }

        printf("\nDo you want to calculate another fare?\n");
        printf("Enter 'y' to continue or 'n' to exit: ");
        
       
        while (getchar() != '\n'); 
        scanf(" %c", &choice); 

        while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
            printf("Invalid input. Please enter 'y' to continue or 'n' to exit: ");
            while (getchar() != '\n'); 
            scanf(" %c", &choice);
        }
    }

    printf("Program exited. Thank you!\n");

    return 0;
}
