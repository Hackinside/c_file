#include <stdio.h>
#include <stdlib.h>

// Function to copy content from source file to destination file
void copyFile(const char *source, const char *destination) {
    FILE *sourceFile, *destinationFile;
    char ch;

    // Open source file in read mode
    sourceFile = fopen(source, "r");

    // Check if source file exists
    if (sourceFile == NULL) {
        printf("Error: source.txt does not exist.\n");
        return;
    }

    // Open destination file in write mode
    destinationFile = fopen(destination, "w");

    // Check if destination file can be created/opened
    if (destinationFile == NULL) {
        printf("Error: Unable to create or open destination.txt.\n");
        fclose(sourceFile); // Close source file if destination cannot be opened
        return;
    }

    // Read content from source file and write to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("Content copied from %s to %s successfully.\n", source, destination);

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);
}

int main() {
    // Create "source.txt" and add some content
    FILE *sourceFile = fopen("source.txt", "w");
    if (sourceFile == NULL) {
        printf("Error: Unable to create source.txt.\n");
        return 1;
    }
    fprintf(sourceFile, "This is the content of source.txt.\n");
    fprintf(sourceFile, "It contains basic details related to the Module.\n");
    fprintf(sourceFile, "This module focuses on file I/O operations in C.\n");
    fclose(sourceFile);
    printf("source.txt created with initial content.\n");

    // Call the copyFile function to copy content
    copyFile("source.txt", "destination.txt");

    return 0;
}
