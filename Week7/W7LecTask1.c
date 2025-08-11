#include <stdio.h>

int main() {
    
    int values[] = {10, 20, 30, 40, 50, 60};

   
    printf("Contents of the 'values' array:\n");
    for (int i = 0; i < 6; i++) {
        printf("Element %d: %d\n", i, values[i]);
    }
    printf("Have a nice day!\n");
    return 0;
}
