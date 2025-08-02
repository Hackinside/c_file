#include <stdio.h>

int main() {
    char lightColor;

    printf("Enter the traffic light color (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &lightColor);

    if (lightColor == 'R' || lightColor == 'r') {
        printf("Stop\n");
    } else if (lightColor == 'Y' || lightColor == 'y') {
        printf("Ready\n");
    } else if (lightColor == 'G' || lightColor == 'g') {
        printf("Go\n");
    } else {
        printf("Invalid light\n");
    }

    return 0;
}
