#include <stdio.h>

// Function to find the maximum of three numbers
int findMax(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main() {
    // Test cases for findMax function
    int num1 = 10, num2 = 25, num3 = 15;
    int maximum = findMax(num1, num2, num3);
    printf("The maximum of %d, %d, and %d is: %d\n", num1, num2, num3, maximum);

    num1 = -5, num2 = -10, num3 = -2;
    maximum = findMax(num1, num2, num3);
    printf("The maximum of %d, %d, and %d is: %d\n", num1, num2, num3, maximum);

    num1 = 100, num2 = 50, num3 = 75;
    maximum = findMax(num1, num2, num3);
    printf("The maximum of %d, %d, and %d is: %d\n", num1, num2, num3, maximum);

    return 0;
}