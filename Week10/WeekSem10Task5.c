#include <stdio.h>

// Function to calculate power without using pow()
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    // Test cases for the power function
    int base1 = 2, exp1 = 3;
    printf("%d raised to the power of %d is: %d\n", base1, exp1, power(base1, exp1)); // Expected: 8

    int base2 = 5, exp2 = 0;
    printf("%d raised to the power of %d is: %d\n", base2, exp2, power(base2, exp2)); // Expected: 1

    int base3 = 3, exp3 = 4;
    printf("%d raised to the power of %d is: %d\n", base3, exp3, power(base3, exp3)); // Expected: 81

    int base4 = 10, exp4 = 2;
    printf("%d raised to the power of %d is: %d\n", base4, exp4, power(base4, exp4)); // Expected: 100

    return 0;
}
