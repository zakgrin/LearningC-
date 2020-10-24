#include<iostream>
using namespace std;

/*
Create a Constructor:
- has the same name as the class.
- has no return.
- is called directly by the class when an new object is created.
- all variable in the class are given initial values. 
*/
class Date
{
public: // to access all variables and functions in main()
    int day;
    int month;
    int year;

    // Constructor: 
    Date(int d, int m, int y)
    {
        day = d; 
        month = m; 
        year = y; 

        cout << "Date class was created: ";
        print();
    }

    void print()
    {
        cout << day << "-" << month << "-" << year << endl; 
    }
};

class Person
{
    string name;
    int age; 
    double height;
    double weight; 

public: // to access only the costructor and functions:
    // Constructor
    Person(string n, int a, double h, double w)
    {
        name = n; 
        age = a; 
        height = h; 
        weight = w; 

        print();
    }

    void print()
    {
        cout << "Name: " << name << " - Age: " << age << " - height: " << height << " - weight: " << weight << endl; 
    }
};

int main() 
{
    /*
    - A good programmer minimize the lines of code in main().
    - Note how classes and methods can help us to reduce the code in main(). 
    */
    Date myDate1(10, 10, 2020); 
    myDate1.print(); 
    Date myDate2(20, 20, 2020); 

    Person Ahmed("Ahmed", 31, 1.8, 82); 
    Ahmed.print(); 
    // but we can't use Ahmed.name

    return 0; 
}