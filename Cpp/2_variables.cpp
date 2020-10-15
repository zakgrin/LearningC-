#include<iostream>
using namespace std;

// No need to define bool type in C++.
// Type "bool" is defined by default.

int main(){

    // 1. Define Variables:
    // int:
    int age = 29; 
    // string: between ""
    // - Note that varialbe name does not need a pointer or array syntax
    // - Note here we use type "string" in C++ which same as "char" in C
    const string name = "Mohamed"; // const: variable can't be changed. 
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
    cout << age << endl
         << name << endl
         << gpa_d << endl
         << sucess << endl // prints 1 when true and 0 when flase
         << letterGrade << endl;

    // 3. Change Variables:
    age = 15; // when we change value we don't need to define type again.
    cout << "age (after change): " << age << endl;

    // Example 1: 
    int i; // here no value was assigned to i, so a number will be assigned.
    cout << "Example 1: i=" << i << endl;
    i = 5; // here we define value of i in a separate line. 
    cout << i << endl; 

    // Example 2: Multiple variables in one line
    int x, y, z;
    x = 5;
    y = 10;
    z = 100;
    cout << x << y << z << endl; // here numbers will be printed without space as "510100"
    
    return 0;
}







