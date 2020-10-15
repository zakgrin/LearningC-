#include<iostream>
using namespace std;

int main(){

    cout << "Welcome to the program" << endl;

    /*
    Example 1: 
    */

    // Define Variables:
    int currentYear = 2020;
    int year;

    // Input Variable:    
    cout << "Please enter your birth year: ";
    cin >> year;

    // Calc and Print: 
    int age = currentYear - year;
    cout << "Your age is " << age << endl;

    /*
    Example 2: 
    */

    // int age; we shouldn't define a variable twice.
    cout << "- please enter your age: ";
    cin >> age;
    cout << "   - your age is " << age << endl;

    float weight;
    cout << "- please enter your weight: ";
    cin >> weight;
    cout << "   - your weight is " << weight;

    return 0;
}