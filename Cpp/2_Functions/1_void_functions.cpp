#include<iostream>
using namespace std;

/*
Void functions do not return values
Void functions can have return but without a value;
Functions have to be defined outside and before 'main'. 
*/

// Function 1: 'void' without return or argument
void printSomething(); // only definition, the function exists under main!

// Global variable: only definition - value can be assigned inside main or here! 
int globalNumber; // not recommended

// Function 2: 'void' without return with 1 argument and global variable
void printNumber(int num){ // type must be declared.
    cout << "Function 2: " << num << " - " << globalNumber << endl;
}

// Function 3: 'void' without return with 2 arguments
void printNumberName(int num, string name){ // type must be declared.
    cout << "Function 3: " << num << " - " << name << endl;
}

int main(){
    printSomething();
    globalNumber = 20; // using by printNumber() but not recommended! 
    printNumber(10);
    printNumberName(20, "Car");
}

void printSomething(){
    cout << "Function 1: printSomthing was called!" << endl;
    return;
    cout << "This line will not be printed";
}