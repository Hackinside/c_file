#include<stdio.h>
int main(){
    int row = 0;
    while (row < 3) { 
        int col = 0;
        while (col < 3) { 
            printf("* ");
            col++;
        }
        printf("\n"); 
        row++;
    }
    return 0;
}
