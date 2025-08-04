#include <stdio.h>
int main() {
    // Declare and initialize the ages array
    int ages[] = {25, 30, 35, 40, 45};
    int index;
    // Print initial array values
    printf("Initial Age List:\n");
    for(int i = 0; i < 5; i++) {
        printf("Age %d: %d\n", i, ages[i]);
    }
    // Get user input to modify an element
    printf("\nEnter index to modify (0-4): ");
    scanf("%d", &index);
    // Validate index input
    if(index < 0 || index >= 5) {
        printf("Invalid index! Please enter a value between 0 and 4.\n");
        return 1;  // Exit program with an error code
    }
    printf("Enter new age: ");
    scanf("%d", &ages[index]);
    // Print updated array values
    printf("\nUpdated Age List:\n");
    for(int i = 0; i < 5; i++) {
        printf("Age %d: %d\n", i, ages[i]);
    }
    return 0;
}