#include <stdio.h>

int main() {
    int score;

    printf("Enter the student's score (0-100): ");
    scanf("%d", &score);
// Now condition if user digit a number out of range between 0 and 100
    if (score < 0 || score > 100) { //using logical operator ||
        printf("Invalid score. Please enter a score between 0 and 100.\n");
        return 1; // Indicate an error
    }

    int tens_digit = score / 10;

    switch (tens_digit) {
        case 10: // For score 100
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default: // For scores below 60 (tens_digit 0-5)
            printf("Grade: F\n");
            break;
    }

    return 0;
}
