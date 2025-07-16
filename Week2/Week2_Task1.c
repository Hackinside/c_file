#include <stdio.h>

int main() {
    int age;
    printf("Task 1\n");
    printf("How old are you? ");
    scanf("%d", &age);

    if (age <= 8) {
        printf("wow, people start using computers early\n");
    }
     
    else if (age == 46) { 
        printf("Task 2\n");  
        printf("Hey! We are the same age!\n");
    }
    else if (age > 8 && age < 46) {
        printf("You are at the age of using computers\n");
    }
    else if (age > 46) {
        printf("You are older than the average computer user\n");
    }
   
    int day, month;
    printf("Task 3\n");
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);

    if (day == 1 && month == 4) {
        printf("It is April fools day\n");
    }
    else
    {
        printf("Just another date\n");
    }
    
    return 0;
}