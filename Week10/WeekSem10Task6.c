#include <stdio.h>

// Function to calculate factorial recursively
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    // Test cases for the factorial function
    int num1 = 5;
    printf("Factorial of %d is: %d\n", num1, factorial(num1)); // Expected: 120

    int num2 = 0;
    printf("Factorial of %d is: %d\n", num2, factorial(num2)); // Expected: 1

    int num3 = 7;
    printf("Factorial of %d is: %d\n", num3, factorial(num3)); // Expected: 5040

    return 0;
}
