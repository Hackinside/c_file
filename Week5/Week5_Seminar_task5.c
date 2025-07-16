#include<stdio.h>
int main(){
    // Nested while loop for the challenge
    int i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 4) {
            if (i == 0) { // First row: *   ***
                if (j == 0 || j >= 2) {
                    printf("*");
                } else {
                    printf(" ");
                }
            } else if (i == 1) { // Second row: ** **
                if (j <= 1 || j >= 3) {
                    printf("*");
                } else {
                    printf(" ");
                }
            } else { // Third row: *** *
                if (j <= 2 || j == 3) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
