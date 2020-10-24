#include<iostream> 
using namespace std; // string type

// this is the preprocessor language
#ifndef STUDENT_H 
#define STUDENT_H 

// This is the header class file: 
class Student
{
private: // variables (usually private)
    string name; 
    int grade; 
public: // constructor and functions (i.e. setters and getters)
    // we can make this shorter by using the prototype here and add the functions after main().
    // This is the optimum way to design a class!! 
    Student(string n, int g);
    void setName(string n);
    void setGrade(int g);
    string pass();
    void print();
};

#endif /* STUDENT_H */
// this is the preprocessor language

// Student Class functions: 
Student::Student(string n, int g)
{
    setName(n); 
    setGrade(g);
}
void Student::setName(string n)
{
    name = n;
}
void Student::setGrade(int g)
{
    grade = g; 
}
string Student::pass()
{
    return (grade > 60 ? "passed" : "failed");
}
void Student::print()
{
    cout << " - Name: " << name; 
    cout << " | Grade: " << grade; 
    cout << " | Status: " << pass() << endl; 
}