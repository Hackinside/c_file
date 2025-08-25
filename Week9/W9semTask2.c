#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandom() {
    int randomNumber = (rand() % 100) + 1;
    printf("Random number: %d\n", randomNumber);
}

int main() {

    srand(time(0));
    printf("Current time in seconds: %ld\n", (long)time(0));

    generateRandom();
    generateRandom();
     printf("Current time in seconds: %ld\n", (long)time(0));
    generateRandom();
    generateRandom();
    generateRandom();
    generateRandom();
    generateRandom();
    generateRandom();

    return 0;
}
