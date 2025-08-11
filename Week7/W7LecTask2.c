#include <stdio.h>

int main() {
    int values[] = {10, 20, 30, 40, 50, 60};
    int index;
    int newValue;

    printf("Contents of the 'values' array:\n");
    for (int i = 0; i < 6; i++) {
        printf("Element %d: %d\n", i, values[i]);
    }

    printf("\nEnter the index (0-5) of the element you want to modify: ");
    scanf("%d", &index);

    if (index < 0 || index > 5) {
        printf("Invalid index! Please enter a value between 0 and 5.\n");
        return 1; 

    }
    printf("Enter the new value for element at index %d: ", index);
    scanf("%d", &newValue);

 
    values[index] = newValue;

   
    printf("\nUpdated contents of the 'values' array:\n");
    for (int i = 0; i < 6; i++) {
        printf("Element %d: %d\n", i, values[i]);
    }

    return 0;
}