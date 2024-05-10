#include <stdio.h>

int main() {
    // Declare variables
    float w1, w2, h, area;

    // Input values for w1, w2, and h
    printf("Enter the value of w1: ");
    scanf_s("%f", &w1);

    printf("Enter the value of w2: ");
    scanf_s("%f", &w2);

    printf("Enter the value of h: ");
    scanf_s("%f", &h);

    // Calculate area
    area = 0.5 * (w1 + w2) * h;

    // Output the result
    printf("The area is: %f\n", area);

    return 0;
}

// You can tell me if I've done something wrong.
