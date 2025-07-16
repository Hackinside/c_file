#include<stdio.h>
int main(){
    // Nested while loop for the challenge
    int row;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    int i = 0;
    while (i < row) {
        int j = 0;
        while (j <= i) { // Columns depend on the current row number
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
