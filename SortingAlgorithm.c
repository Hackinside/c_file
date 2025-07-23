#include <stdio.h>

#include <string.h>



int main() {

    // Step 1: Declare arrays for names and scores

    char *studentNames[] = {

        "Alice", "Bob", "Charlie", "Diana", "Ethan", "Fiona", "George"

    };



    float studentScores[] = {

        85.5, 72.0, 90.25, 65.75, 78.9, 88.0, 70.4

    };



    // Step 2: Determine the number of students

    int n = sizeof(studentScores) / sizeof(studentScores[0]);



    // Step 3: Print original data

    printf("Before Sorting (by scores):\n");

    for (int i = 0; i < n; i++) {

        printf("%s - %.2f\n", studentNames[i], studentScores[i]);

    }



    // Step 4: Bubble Sort logic

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (studentScores[j] > studentScores[j + 1]) {

                // Swap scores

                float tempScore = studentScores[j];

                studentScores[j] = studentScores[j + 1];

                studentScores[j + 1] = tempScore;



                // Swap corresponding names

                char *tempName = studentNames[j];

                studentNames[j] = studentNames[j + 1];

                studentNames[j + 1] = tempName;

            }

        }

    }



    // Step 5: Print sorted data

    printf("\nAfter Sorting (ascending scores):\n");

    for (int i = 0; i < n; i++) {

        printf("%s - %.2f\n", studentNames[i], studentScores[i]);

    }



    return 0;

}