#include<iostream>
using namespace std;

int main(){

    // Define Variables:
    int currentYear = 2020;
    int year;

    // Input Variable:    
    cout << "Please enter your birth year: ";
    cin >> year;

    // Calc and Print: 
    int age = currentYear - year;
    cout << "Your age is " << age << endl;

}