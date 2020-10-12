#include<iostream>
using namespace std;


int main(){

    // 1. Define Variables:
    // int:
    int age = 29; 
    // string: between ""
    const string name = "Mohamed"; // const: variable can't be changed. 
    // double or float: 
    double gpa = 3.2;
    // bool: true or false
    bool sucess = true;
    // char: only 1 character between ''
    char letterGrade = 'B';

    /*
    Variable Names:
        1. can't be defined more than one time.
        2. can't be keyword e.g. return, end, for.
        3. can't start with a number.
        4. can't contain symbols except underscore '_'.
        5. Must be type defined

        Redomended:
        - long names are either separated by _ or by Caps letters
        - long names starts with small letters for variables
        - usually Class names starts with Caps letters. 
    */

    // 2. Change Variables:
    age = 15;

    // 3. Print Variables:
    cout << age << endl
         << name << endl
         << gpa << endl
         << sucess << endl // prints 1 when true and 0 when flase
         << letterGrade << endl;

    return 0;
}







