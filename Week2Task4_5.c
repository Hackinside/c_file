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
    
    printf("Task 4\n");
    if (age < 18) {
        printf("You are too young to buy alcohol.\n");
    } else {
        printf("You are old enough to buy alcohol.\n");
    }

    int speed = 75;
    int speedLimit = 60;
    printf("Task 5\n");
    if (speed > speedLimit) {
        printf("Your speed is %d, the speed limit is %d. You’re Speeding! Ticket for you!\n", speed, speedLimit);
    } else {
        printf("Please continue to drive safely\n");
    }
    
    printf("Task 6\n");
    printf("What is you speed now?\n");
    
    int speed2; 
    int speedLimit2 = 60; // Example speed limit
    scanf("%d", &speed2);
    int difference = speed2 - speedLimit2;
    
    if (difference > 10) {
        printf("Your speed is %d, the speed limit is %d. You exceeded the limit by %d mph. You’re Speeding! Ticket and possible court summons for you!\n", speed2, speedLimit2, difference);
    } else if (difference > 0) {
        printf("Your speed is %d, the speed limit is %d. You’re Speeding! Ticket for you!\n", speed2, speedLimit2);
    } else {
        printf("Please continue to drive safely\n");
    }

    int day2, month2;
    printf("Task 7\n");
    printf("Enter day: ");
    scanf("%d", &day2);
    printf("Enter month: ");
    scanf("%d", &month2);

    if (day2 == 1 && month2 == 4) {
        printf("It is April Fools Day\n");
    } else if (day2 == 1 && month2 == 1) {
        printf("It is New Years Day\n");
    } else if (day2 == 4 && month2 == 5) {
        printf("It is Star Wars Day (May the 4th be with you)\n");
    } else if (day2 == 11 && month2 == 4) { 
        printf("Happy Birthday!\n");
    } else {
        printf("Just another date\n");
    }

    printf("Task 8\n");
    printf("Now the ticket price relative to your age\n");
    double normalPrice = 4.0;
    double ticketPrice;

    if (age < 4) {
        ticketPrice = 0.0;
        printf("You are an infant, your ticket is free!\n");
    } else if (age < 16) {
        ticketPrice = normalPrice / 2.0;
        printf("You are a child, your ticket price is £%.2f\n", ticketPrice);
    } else if (age >= 65) {
        ticketPrice = normalPrice / 3.0;
        printf("You are a pensioner, your ticket price is £%.2f\n", ticketPrice);
    } else {
        ticketPrice = normalPrice;
        printf("Your ticket price is £%.2f\n", ticketPrice);
    }

  
    return 0;
}

