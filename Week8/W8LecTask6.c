#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "George";
    char str2[] = "george";
    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("SAME\n");
    } else {
        printf("DIFFERENT\n");
    }

    return 0;
}
