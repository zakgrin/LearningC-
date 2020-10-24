#include "Student.h" // with local files we use "" instead of <>

/*
This file contains the implementation of the Student class header (Student.h
). This appraoch did not work and I had to put this part at the end of 
the header file.
*/

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