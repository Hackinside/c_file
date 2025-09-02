#include <stdio.h>
#include <stdlib.h>

void mergeFiles(const char *file1, const char *file2, const char *mergedFile) {
    FILE *fp1, *fp2, *fmerged;
    char ch;

    // Open file1.txt in read mode
    // Check if file1.txt exists, if not, create it with content
    fp1 = fopen(file1, "r");
    if (fp1 == NULL) { // If file1.txt does not exist, create it
        fp1 = fopen(file1, "w");
        if (fp1 == NULL) {
            perror("Error creating file1");
            exit(EXIT_FAILURE);
        }
        fprintf(fp1, "This is content from %s.\n", file1);
        fclose(fp1);
        fp1 = fopen(file1, "r"); // Reopen in read mode after creation
    }

    // Open file2.txt in read mode
    // Check if file2.txt exists, if not, create it with content
    fp2 = fopen(file2, "r");
    if (fp2 == NULL) { // If file2.txt does not exist, create it
        fp2 = fopen(file2, "w");
        if (fp2 == NULL) {
            perror("Error creating file2");
            fclose(fp1);
            exit(EXIT_FAILURE);
        } // Reopen in read mode after creation
        fprintf(fp2, "This is content from %s.\n", file2); 
        fclose(fp1);
        fp2 = fopen(file2, "r"); // Reopen in read mode after closing fp1
    }

    // Open merged.txt in write mode
    fmerged = fopen(mergedFile, "w");
    if (fmerged == NULL) {
        perror("Error opening merged file");
        fclose(fp1);
        fclose(fp2);
        exit(EXIT_FAILURE);
    }

    // Check if files exist before merging
    if (fp1 == NULL || fp2 == NULL) {
        printf("Error: One or both source files do not exist. Cannot merge.\n");
        if (fp1) fclose(fp1);
        if (fp2) fclose(fp2);
        fclose(fmerged);
        return;
    } else {
        // Copy contents of file1.txt to merged.txt
        while ((ch = fgetc(fp1)) != EOF) {
            fputc(ch, fmerged);
        }

        // Copy contents of file2.txt to merged.txt
        while ((ch = fgetc(fp2)) != EOF) {
            fputc(ch, fmerged);
        }

        // Close the files after merging
        fclose(fp1);
        fclose(fp2);
        fclose(fmerged);
    }
    printf("Files merged successfully into %s\n", mergedFile);
}

int main() {
    mergeFiles("file.txt", "file2.txt", "merged.txt");
    return 0;
}
