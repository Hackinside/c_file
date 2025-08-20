#include <stdio.h>

void printTriangle() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    printTriangle();
    return 0;
}
