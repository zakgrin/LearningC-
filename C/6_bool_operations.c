#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){

    // Define Variables:
    int x = 10;
    int y = 10;
    int z = 30;

    // Binary Bool Operations;
    bool equal = x == y;
    bool notEqual = x != y;
    bool greater = x > y;
    bool less = x < y;
    bool greaterOrEqual = x >= y;
    bool lessOrEqual = x <= y;

    printf("x = %d, y = %d \n", x, y);
    printf("x == y: %d \n", equal);
    printf("x != y: %d \n", notEqual);
    printf("x > y: %d \n", greater);
    printf("!(x > y): %d \n", !greater);
    printf("x < y: %d \n", less);
    printf("x >= y: %d \n", greaterOrEqual);
    printf("x <= y: %d \n", lessOrEqual);

    // Multiple Bool Operations: 
    // cout << "x == y == z: " << x == y == z << endl; // not allowed to compare 3 variables directly
    printf("(x == y) and (x == z): %d \n", ((x == y) && (x == z))); // we must include outer ()
    printf("(x == y) or (x == z): %d \n", ((x == y) || (x == z)));

    return 0;
}