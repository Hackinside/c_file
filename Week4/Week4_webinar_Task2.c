#include <stdio.h>

int main() {
    int num;

    printf("Enter the number for which you want to see the multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication Table for %d:\n", num);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, num, i * num);
    }

    return 0;
}
