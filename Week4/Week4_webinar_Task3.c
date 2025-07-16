#include <stdio.h>

int main() {
    int age;
    int state = 1; 

    while (state == 1) {
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
        printf("Enter 1 to continue or 0 to exit: ");
       
        while (scanf("%d", &state) != 1 || (state != 0 && state != 1)) {
            printf("Invalid input. Please enter 1 to continue or 0 to exit: ");
            while (getchar() != '\n');
        }
    }

    printf("Program exited. Thank you!\n");

    return 0;
}
