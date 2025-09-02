#include <stdio.h>

void readFromFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return;
    }
    
    printf("Contents of %s:\n", filename);
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    
    fclose(file);
}

int main() {
    readFromFile("output.txt");
    return 0;
}