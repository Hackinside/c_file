#include <stdio.h>

// Function to calculate simple interest
float calculateInterest(float principal, float rate, float time) {
    float interest = (principal * rate * time) / 100.0;
    return interest;
}

int main() {
    // Test cases
    float p1 = 1000.0, r1 = 5.0, t1 = 2.0;
    float interest1 = calculateInterest(p1, r1, t1);
    printf("Simple Interest for Principal=%.2f, Rate=%.2f%%, Time=%.2f years: %.2f\n", p1, r1, t1, interest1);

    float p2 = 5000.0, r2 = 7.5, t2 = 3.0;
    float interest2 = calculateInterest(p2, r2, t2);
    printf("Simple Interest for Principal=%.2f, Rate=%.2f%%, Time=%.2f years: %.2f\n", p2, r2, t2, interest2);

    float p3 = 2500.0, r3 = 4.0, t3 = 1.5;
    float interest3 = calculateInterest(p3, r3, t3);
    printf("Simple Interest for Principal=%.2f, Rate=%.2f%%, Time=%.2f years: %.2f\n", p3, r3, t3, interest3);

    return 0;
}
