#include<iostream>
using namespace std;

// Global variables
int x = 99; // but local variables have the piority

int main(){
    
    // Variables of the same name can exist at different scopes:
    // In this example, two variables "number" were used at different scopes.

    // scope 1: main

    // Local Variables (outer)
    int number = 100;
    int x = 200; 

    for(int i = 0; i < 5; i++){
        // scope 2: for (inside "main" but treated as a different scope)
        //      - Variables with same names as outer scopes can be used 
        //        and have the piority
        //      - This scope has access to variables at scope 1. 
        //      - Variables defined here can not be used in outer scope.
        int number = i; 

        cout << "number (inner) = " << number << endl;
        cout << "x (outer) = " << x << endl;

    }

    // scope 1: main
    cout << "number (outer) = " << number << endl;
    cout << "x = " << x << endl;

    return 0; 
}