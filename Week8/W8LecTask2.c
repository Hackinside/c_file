#include <stdio.h>

int main() {
    char chars[2] = {'X', 'Y'};
    char temp;

    printf("Before swapping:\n");
    printf("char1 = %c\n", chars[0]);
    printf("char2 = %c\n", chars[1]);

    temp = chars[0];
    chars[0] = chars[1];
    chars[1] = temp;

    printf("\nAfter swapping:\n");
    printf("char1 = %c\n", chars[0]);
    printf("char2 = %c\n", chars[1]);

    return 0;
}
