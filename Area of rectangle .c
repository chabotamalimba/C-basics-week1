#include <stdio.h>   // Allows us to use printf()

int main() {
    float length = 10.0;   // Length of the rectangle
    float width = 5.0;     // Width of the rectangle
    float area;            // Variable to store area

    area = length * width;   // Area formula: length × width

    printf("Area of rectangle = %.2f\n", area);  
    // %.2f prints the answer with 2 decimal places

    return 0;   // End of program
}