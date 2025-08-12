#include <stdio.h>

int main() {
    char str[] = "Solent";
    int i = 0;

    printf("Printing the string character by character:\n");
    while (str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");

    return 0;
}
