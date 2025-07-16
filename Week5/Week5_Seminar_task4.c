#include<stdio.h>
int main(){
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    int i = 0;
    while (i < row) {
        int j = 0;
        while (j <= i) {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
