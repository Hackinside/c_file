#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "George";
    char str2[] = "Edward";
    int areSame = -1; 

    if ((int)strlen(str1) != (int)strlen(str2)) {
        areSame = -1;
    } else {
        for (int i = 0; i < (int)strlen(str1); i++) {
            if (str1[i] != str2[i]) { 
                areSame = 0;
                break; 
            }
        }
    }

    if (areSame) {
        printf("SAME\n");
    } else {
        printf("DIFFERENT\n");
    }

    return 0;
}
