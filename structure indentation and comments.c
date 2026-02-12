#include <stdio.h>   // Allows input and output

int main() {
    int i, n;   // i for loop counter, n for limit

    printf("Enter n: ");
    scanf("%d", &n);

    // Loop from 1 to n
    for (i = 1; i <= n; i++) {
        // Check if number is even
        if (i % 2 == 0) {
            printf("%d ", i);     // Print even numbers normally
        } else {
            printf("[%d] ", i);   // Print odd numbers in brackets
        }
    }

    return 0;   // End of program
}