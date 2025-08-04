#include <stdio.h>

int main() {

    // Initialize a 2D array with two rows and three columns

    int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };

    // Access and print the element at row 1, column 1

    printf("Original value at matrix[1][1]: %d\n", matrix[1][1]); // Outputs 3

    // Modify the element at row 1, column 1

    matrix[1][1] = 10;

    // Print the modified value

    printf("Updated value at matrix[1][1]: %d\n", matrix[1][1]); // Outputs 10

    return 0;

}