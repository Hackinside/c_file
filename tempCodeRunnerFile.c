#include<stdio.h>
int main(){

    int  row, col;
    char symbol;

    printf("Enter your symbol: ");
    scanf("%c", &symbol);
    printf("Number of rows and columns: ");
    scanf( "%d%d", &row, &col);

    for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
        if( i == j+1){
            printf(" \t");
        }else{
        printf("%c\t", symbol);
        }
    }
    printf("\n");
    }
    printf("\nEnd of pattern");
    return 0;
}