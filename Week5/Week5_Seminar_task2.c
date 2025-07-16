#include<stdio.h>
int main(){
    // Nested while loop for the challenge
    int row = 0;
    while (row < 3) { // Three rows
        int col = 0;
        while (col < 3) { // Three columns
            printf("* ");
            col++;
        }
        printf("\n"); // New line after each row
        row++;
    }
    return 0;
}
