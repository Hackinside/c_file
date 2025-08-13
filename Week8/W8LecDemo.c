#include <stdio.h>

int main() {
    int numbs[50];
    int val = 0;
    int j;

    printf("Enter numbers (enter -1 to stop):\n");

    for (j = 0; j < 50; j++) {
        scanf("%d", &val);
        if (val == -1) {
            break;
        }
        numbs[j] = val;
    }

    printf("\nNumbers in reverse order:\n");
    for (j = j - 1; j >= 0; j--) {
        printf("%d\n", numbs[j]);
    }    
    for (int i = 0; i < j - 1; i++) {
        for (int k = 0; k < j - 1 - i; k++) {
            if (numbs[k] > numbs[k+1]) {
                int temp = numbs[k];
                numbs[k] = numbs[k+1];
                numbs[k+1] = temp;
            }
        }
    }

    printf("\nNumbers in ascending order:\n");
    for (int i = 0; i < j; i++) {
        printf("%d\n", numbs[i]);
    }


    return 0;
}
