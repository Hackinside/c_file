#include <stdio.h>

int main() {
    int numbers[2] = {11, 54};
    int temp;

    printf("Before swapping:\n");
    printf("num1 = %d\n", numbers[0]);
    printf("num2 = %d\n", numbers[1]);

    temp = numbers[0];
    numbers[0] = numbers[1];
    numbers[1] = temp;

    printf("\nAfter swapping:\n");
    printf("num1 = %d\n", numbers[0]);
    printf("num2 = %d\n", numbers[1]);

    return 0;
}
