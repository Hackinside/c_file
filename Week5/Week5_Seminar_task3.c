#include<stdio.h>
int main(){
    // Nested while loop for the challenge
    int row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int i = 0;
    while (i < row) {
        int j = 0;
        while (j < col) {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
