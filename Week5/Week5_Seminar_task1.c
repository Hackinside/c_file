#include<stdio.h>
int main(){
    int row = 0;
    while (row < 1) { 
        int col = 0;
        while (col < 3) { 
            printf("* ");
            col++;
        }
        row++;
    }
    printf("\n");
    return 0;
}
