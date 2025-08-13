#include <stdio.h>

int main() {
    char str[100];
    int i = 0; 
    printf("Enter a string: ");
    scanf("%s", str); 

    printf("Printing the string character by character:\n");
    while (str[i] != '\0') { 
        printf("%c", str[i]);
        i++;
    }
    printf("\n");

    return 0;
}
