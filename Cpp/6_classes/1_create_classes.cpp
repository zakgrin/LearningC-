#include<iostream>
using namespace std;

/*
Create a Class: 
- start with a capital letter
- classes must end with ';' not as functions! 
*/
class Date
{
public: // public variables that can be accessed by main(). 
    int year; 
    int month;
    int day;

    // print Function: 
    void print() // a function to print a class.
    {
    cout << "Date.print(): " << day << "-" << month << "-" << year << endl;
    }
    // fill Function: 
    void fill(int d, int m, int y) // a function to print a class.
    {
        day = d; 
        month = m; 
        year = y; 
    }

}; // we must use ';' with classes


void printDate(Date date) // a function to print a class.
{
    cout << "printDate(): " << date.day << "-" << date.month << "-" << date.year << endl;
}


int main()
{
    /*
    Define a variable object:
    - here we create an object based on class Date. 
    */ 
    Date birthday;
    birthday.year = 1990;
    birthday.month = 10;
    birthday.day = 8;

    cout << "Date: " << birthday.day << "-" << birthday.month << "-" << birthday.year << endl;
    printDate(birthday);

    /*
    Add a Function to a Class
    */ 
    birthday.print();
    birthday.fill(10, 10, 2020);
    birthday.print(); 

    return 0; 
}