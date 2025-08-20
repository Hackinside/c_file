#include <stdio.h>

void reverseNumber() {
    int num, reversedNum = 0, remainder;

    printf("Enter an integer to reverse: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversedNum);
}

int main() {
    reverseNumber();
    return 0;
}
