#include <stdio.h>

// Function to count even and odd numbers in an array
void countEvenOdd(int arr[], int size, int *evenCount, int *oddCount) {
    *evenCount = 0;
    *oddCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            (*evenCount)++;
        } else {
            (*oddCount)++;
        }
    }
}

int main() {
    // Test cases for countEvenOdd function
    int numbers1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size1 = sizeof(numbers1) / sizeof(numbers1[0]);
    int evenCount1, oddCount1;
    countEvenOdd(numbers1, size1, &evenCount1, &oddCount1); // Call the function to count even and odd numbers
    printf("Array 1: Even numbers: %d, Odd numbers: %d\n", evenCount1, oddCount1);

    int numbers2[] = {11, 22, 33, 44, 55};
    int size2 = sizeof(numbers2) / sizeof(numbers2[0]);
    int evenCount2, oddCount2;
    countEvenOdd(numbers2, size2, &evenCount2, &oddCount2);
    printf("Array 2: Even numbers: %d, Odd numbers: %d\n", evenCount2, oddCount2);

    int numbers3[] = {2, 4, 6, 8, 10};
    int size3 = sizeof(numbers3) / sizeof(numbers3[0]);
    int evenCount3, oddCount3;
    countEvenOdd(numbers3, size3, &evenCount3, &oddCount3);
    printf("Array 3: Even numbers: %d, Odd numbers: %d\n", evenCount3, oddCount3);

    int numbers4[] = {1, 3, 5, 7, 9};
    const int size4 = sizeof(numbers4) / sizeof(numbers4[0]);

    int evenCount4, oddCount4;
    countEvenOdd(numbers4, size4, &evenCount4, &oddCount4);
    printf("Array 4: Even numbers: %d, Odd numbers: %d\n", evenCount4, oddCount4);

    return 0;
}
