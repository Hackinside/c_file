#include<stdio.h>
int main(){
    // Nested for loop for the challenge
    for (int i = 0; i < 3; i++) { // Three rows
        for (int j = 0; j < 3; j++) { // Three columns
            printf("* ");
        }
        printf("\n"); // New line after each row
    }
    return 0;
}
