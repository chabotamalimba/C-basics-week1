#include <stdio.h>

// Function to check even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkEvenOdd(n);   // Function call

    return 0;
}