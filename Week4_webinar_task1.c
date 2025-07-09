#include <stdio.h>

int main() {
    // Count from 1 to 20
    printf("Counting from 1 to 20:\n");
    int i = 1;
    while (i <= 20) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    printf("Counting from 5 to 15:\n");
    i = 5;
    while (i <= 15) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
  
    printf("Counting from 1 to 21 in steps of 2:\n");
    i = 1;
    while (i <= 21) {
        printf("%d ", i);
        i += 2;
    }
    printf("\n\n");
 
    printf("Counting down from 10 to 1:\n");
    i = 10;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }
    printf("\n\n");

    return 0;
}
