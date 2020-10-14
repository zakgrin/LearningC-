#include<iostream>
using namespace std;

int main(){

    int grade;

    cout << "Please enter your grade: ";
    cin >> grade;

    // Version 1:
    if (grade >= 60){ // 
        cout << "1. Passed!" << endl;
    }
    else{
        cout << "1. Failed!" << endl;
    }

    // Version 2: curely barackets are not needed when we have only one line.
    if (grade >= 60)
        cout << "2. Passed!" << endl;
    else
        cout << "2. Failed!" << endl;

    // Version 3: oneline if condition
    grade >= 60 ? cout << "3. Passed!" << endl : cout << "3. Failed!" << endl;

    // Version 4: oneline if with cout
    cout << "4. You are " << (grade >= 60 ? "Passed!" : "Failed!");
    
    return 0;
}