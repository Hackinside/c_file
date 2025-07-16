#include <stdio.h>

int main() {
    int day, time_period;

    printf("Enter a day (1 for Monday, 2 for Tuesday, etc.): ");
    scanf("%d", &day);

    printf("Enter a time period (1 for Morning, 2 for Evening): ");
    scanf("%d", &time_period);

    switch (day) {
        case 1:
            printf("Day: Monday\n");
            switch (time_period) {
                case 1:
                    printf("Time Period: Morning\n");
                    break;
                case 2:
                    printf("Time Period: Evening\n");
                    break;
                default:
                    printf("Invalid time period.\n");
                    break;
            }
            break;
        case 2:
            printf("Day: Tuesday\n");
            switch (time_period) {
                case 1:
                    printf("Time Period: Morning\n");
                    break;
                case 2:
                    printf("Time Period: Evening\n");
                    break;
                default:
                    printf("Invalid time period.\n");
                    break;
            }
            break;
        case 3:
            printf("Day: Wednesday\n");
            switch (time_period) {
                case 1:
                    printf("Time Period: Morning\n");
                    break;
                case 2:
                    printf("Time Period: Evening\n");
                    break;
                default:
                    printf("Invalid time period.\n");
                    break;
            }
            break;
        case 4:
            printf("Day: Thursday\n");
            switch (time_period) {
                case 1:
                    printf("Time Period: Morning\n");
                    break;
                case 2:
                    printf("Time Period: Evening\n");
                    break;
                default:
                    printf("Invalid time period.\n");
                    break;
            }
            break;
        case 5:
            printf("Day: Friday\n");
            switch (time_period) {
                case 1:
                    printf("Time Period: Morning\n");
                    break;
                case 2:
                    printf("Time Period: Evening\n");
                    break;
                default:
                    printf("Invalid time period.\n");
                    break;
            }
            break;
        case 6:
            printf("Day: Saturday\n");
            switch (time_period) {
                case 1:
                    printf("Time Period: Morning\n");
                    break;
                case 2:
                    printf("Time Period: Evening\n");
                    break;
                default:
                    printf("Invalid time period.\n");
                    break;
            }
            break;
        case 7:
            printf("Day: Sunday\n");
            switch (time_period) {
                case 1:
                    printf("Time Period: Morning\n");
                    break;
                case 2:
                    printf("Time Period: Evening\n");
                    break;
                default:
                    printf("Invalid time period.\n");
                    break;
            }
            break;
        default:
            printf("Invalid day.\n");
            break;
    }

    return 0;
}
