#include <stdio.h>

int main() {
    char str[] = "George";
    int length = 0;
    int i = 0;

    while (str[i] != '\0') {
        length++;
        i++;
    }

    printf("Original string: %s\n", str);
    printf("Reversed string: ");

    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
