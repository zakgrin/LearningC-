#include<iostream>
using namespace std; 

// Class header .. code is under main(). 
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


int main()
{
    Student Omar("Omar", 89);
    Student Ahmed("Agmed", 78); 
    Omar.print(); 
    Ahmed.print();

    return 0; 
}


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