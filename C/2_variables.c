#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h> // to define boolean variable
// or typedef enum {false, true} bool;

int main(){

    // 1. Define Variables:
    // int:
    int age = 29; 
    // string: between "" 
    // - Note that varialbe name has to be either *name (pointer syntax) or name[] (array syntax)
    // - Note here we use type "char" in C which same as "string" in C++
    const char *name = "Mohamed"; // const: variable can't be changed. 
    // double or float: 
    float gpa_f = 3.2;
    double gpa_d = 3.222222;
    // bool: true or false
    bool sucess = true;
    // char: only 1 character between ''
    char letterGrade = 'B';

    /*
    Variable Names:
        1. can't be defined more than one time.
        2. can't be keyword e.g. return, end, for.
        3. can't start with a number.
        4. can't contain symbols except underscore '_'.
        5. variable type must be defined before name

    Name Conventions:
        - long names are either separated by _ or by Caps letters
        - long names starts with small letters for variables
        - usually Class names starts with Caps letters. 
    */

    // 2. Print Variables:
    printf("%d\n%s\n%f\n%d\n%c\n", age, 
                                 name,
                                 gpa_d,
                                 sucess,
                                 letterGrade);

    // 3. Change Variables:
    age = 15; // when we change value we don't need to define type again.
    printf("age (after change): %d \n", age);

    // Example 1: 
    int i; // here no value was assigned to i, so a number will be assigned.
    printf("Example 1: i=%d \n", i);
    i = 5; // here we define value of i in a separate line. 
    printf("%d \n", i); 

    // Example 2: Multiple variables in one line
    int x, y, z;
    x = 5;
    y = 10;
    z = 100;
    printf("%d%d%d", x, y, z); // here numbers will be printed without space as "510100"
    
    return 0;
}