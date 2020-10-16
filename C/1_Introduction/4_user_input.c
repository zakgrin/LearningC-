#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Welcome to the program\n");

    /*
    Example 1: 
    */

    // Define Variables:
    int currentYear = 2020;
    int year;

    // Input Variable:    
    printf("Please enter your birth year: ");
    scanf("%d", &year);

    // Calc and Print: 
    int age = currentYear - year;
    printf("Your age is %d \n", age);

    /*
    Example 2: 
    */

    // int age; we shouldn't define a variable twice.
    printf("- please enter your age: ");
    scanf("%d", &age); // (%d) for decimal. (&age) pointer to variable "age".
    printf("    - your age is %d \n", age);
    
    float weight;
    printf("- please enter your weight: ");
    scanf("%f", &weight); // (%f) for float.
    printf("    - your weight is %.2f \n", weight); // (%.2f) take first two digits after ".".

    return 0;
}