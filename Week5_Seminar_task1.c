#include<stdio.h>
int main(){
    // Nested while loop for the challenge
    int row = 0;
    while (row < 1) { // Only one row
        int col = 0;
        while (col < 3) { // Three columns
            printf("* ");
            col++;
        }
        row++;
    }
    printf("\n");
    return 0;
}
