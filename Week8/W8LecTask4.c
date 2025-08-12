#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "George";
    char str2[] = "Edward";
    char temp;
    int length = strlen(str1); 

    printf("Before swapping:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    for (int i = 0; i < length; i++) {
        temp = str1[i];
        str1[i] = str2[i];
        str2[i] = temp;
    }

    printf("\nAfter swapping:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    return 0;
}
