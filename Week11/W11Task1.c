#include <stdio.h>
#include <stdlib.h> // Required for exit()

// Function to write text to a file
void writeToFile(const char *filename, const char *text) {
    FILE *filePointer;

    // Open the file in write mode ("w")
    filePointer = fopen(filename, "w");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error opening file %s!\n", filename);
        exit(EXIT_FAILURE); // Exit the program if file cannot be opened
    }

    // Write the text to the file
    fprintf(filePointer, "%s", text);

    // Close the file
    fclose(filePointer);
}

int main() {
    char userInput[256]; // Buffer to store user input
    const char *filename = "output.txt";

    // Ask the user to enter a line of text
    printf("Enter a line of text to write to the file: ");
    fgets(userInput, sizeof(userInput), stdin); // Read input including spaces

    // Remove the trailing newline character if present
    for (int i = 0; userInput[i] != '\0'; i++) {
        if (userInput[i] == '\n') {
            userInput[i] = '\0';
            break;
        }
    }

    // Call the function to write the text to the file
    writeToFile(filename, userInput);

    // Display a success message
    printf("Successfully wrote the text to %s\n", filename);

    return 0;
}
