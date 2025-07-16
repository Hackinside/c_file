#include <stdio.h>

int main() {
    int num = 5; // Store the number 5 in a variable

    printf("Multiplication Table for %d:\n", num);

    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++) {
        // Print each multiplication result
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
