#include <stdio.h>

// Function to calculate the sum of array elements
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    // Create an array
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Call the function to calculate the sum
    int totalSum = sumArray(numbers, size);

    // Print the result
    printf("The sum of the array elements is: %d\n", totalSum);

    return 0;
}
