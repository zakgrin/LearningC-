#include<iostream>
using namespace std; 


class Student
{
private: // variables (usually private)
    string name; 
    int grade; 
public: // constructor and functions (i.e. setters and getters)
    Student(string n, int g)
    {
        setName(n); 
        setGrade(g);
    }
    void setName(string n)
    {
        name = n;
    }
    void setGrade(int g)
    {
        grade = g; 
    }
    string pass()
    {
        return (grade > 60 ? "passed" : "failed");
    }
    void print()
    {
        cout << " - Name: " << name; 
        cout << " | Grade: " << grade; 
        cout << " | Status: " << pass() << endl; 
    }
};


int main()
{
    Student Omar("Omar", 89);
    Student Ahmed("Agmed", 78); 
    Omar.print(); 
    Ahmed.print();

    return 0; 
}
