#include <stdio.h>

int main() {   
    // Declare variables
    char name[100];  
    int age; 

    // Ask the user for their name
    printf("Enter your name: ");  
    scanf("%s", name); 

    // Ask the user for their age
    printf("Enter your age: "); 
    scanf("%d", &age); 

    // Print a greeting with the user's name and age
    printf("Hello, %s! You are %d years old.\n", name, age); 

    // Print a fun message about hobby
    printf("My favorite hobby is coding.\n");    

    return 0;
}