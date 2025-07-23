#include <stdio.h>

int main() {
    int start, end;
    printf("Enter the starting number for the multiplication table: ");
    scanf("%d", &start);
    printf("Enter the ending number for the multiplication table: ");
    scanf("%d", &end); 
    if (start > end) {
        printf("Error: The starting number cannot be greater than the ending number.\n");
        return 1; 
    }
    for (int i = start; i <= end; i++) {
        printf("\nMultiplication Table for %d:\n", i);
        for (int j = 1; j <= 10; j++) { 
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
    return 0;
}
