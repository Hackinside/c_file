#include<stdio.h>
int main(){
    int i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 4) {
            if (i == 0) {
                if (j == 0 || j >= 2) {
                    printf("*");
                } else {
                    printf(" ");
                }
            } else if (i == 1) {
                if (j <= 1 || j >= 3) {
                    printf("*");
                } else {
                    printf(" ");
                }
            } else { 
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
