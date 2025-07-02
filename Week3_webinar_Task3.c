#include <stdio.h>

int main() {
    int light_state;

    printf("Enter the traffic light state (1 for Red, 2 for Yellow, 3 for Green): ");
    scanf("%d", &light_state);

    switch (light_state) {
        case 1:
            printf("Stop\n");
            break;
        case 2:
            printf("Get Ready\n");
            break;
        case 3:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light state. Please enter 1, 2, or 3.\n");
            break;
    }

    return 0;
}
