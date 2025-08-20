#include <stdio.h>

void printFibonacci() {
    int a = 0, b = 1, nextTerm;

    printf("Fibonacci Series: ");

    for (int i = 1; i <= 10; ++i) {
        printf("%d ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    printf("\n");
}

int main() {
    printFibonacci();

    return 0;
}
