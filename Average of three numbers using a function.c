#include <stdio.h>

// Function to calculate average
float calculateAverage(float a, float b, float c) {
    return (a + b + c) / 3.0;
}

int main() {
    float x, y, z;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &x, &y, &z);

    printf("Average = %.2f", calculateAverage(x, y, z));

    return 0;
}