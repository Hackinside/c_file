#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    int remainder;

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        return 1; // True
    } else {
        return 0; // False
    }
}

int main() {
    // Test cases for isPalindrome function
    int num1 = 343;
    printf("%d is a palindrome: %s\n", num1, isPalindrome(num1) ? "True" : "False"); // Expected: True

    int num2 = 121;
    printf("%d is a palindrome: %s\n", num2, isPalindrome(num2) ? "True" : "False"); // Expected: True

    int num3 = 123;
    printf("%d is a palindrome: %s\n", num3, isPalindrome(num3) ? "True" : "False"); // Expected: False

    int num4 = 0;
    printf("%d is a palindrome: %s\n", num4, isPalindrome(num4) ? "True" : "False"); // Expected: True

    int num5 = 12321;
    printf("%d is a palindrome: %s\n", num5, isPalindrome(num5) ? "True" : "False"); // Expected: True

    return 0;
}
