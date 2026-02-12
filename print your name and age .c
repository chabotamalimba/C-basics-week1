#include <stdio.h>   // This lets us use printf()

int main() {
    // Declare and store the name (text → string)
    char name[] = "Chabota Malimba";

    // Declare and store the age (whole number → integer)
    int age = 23;

    // %s is a format specifier for a string (text)
    // \n moves the cursor to the next line
    printf("Name: %s\n", name);

    // %d is a format specifier for an integer (whole number)
    printf("Age: %d\n", age);

    // End of program
    return 0;
}