#include <stdio.h>
#include <stdlib.h> 

void generateRandom() {
    int randomNumber = (rand() % 100) + 1; 
    printf("Random number: %d\n", randomNumber);
}

int main() {
 
    srand(1);

    generateRandom();
    generateRandom();
    generateRandom();

    return 0;
}
