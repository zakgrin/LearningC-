#include<iostream>
#include<iomanip>

using namespace std;

int main()
{   
    /*
    Example 1: cin input length issue
    */
    char name[4];
    cout << "Please enter your name: ";
    cin >> name; 
    cout << "You are welcome " << name << endl;
    /*
    Notes:
    - although name array has only 2 spaces, but it could expand to all letters!.
    - but if the entered value is significantly larger than what was specified
      then the program will crush.
    - in fact, cin saves all entered values even beyound what was booked, 
      the program crashed if the compiler could not find a place to save all 
      entered values including the NULL character. 
    - the solution is to eliminate cin to a specific number of input. 
    */

    /*
    Example 2: eliminate cin input length by iomanip 
    */
    char major[20]; 
    cout << "Please enter your name: ";
    cin >> setw(20) >> name; 
    cout << "Please enter your Major: ";
    cin >> setw(20) >> major; // will get any data from buffer before running!
    cout << "Name is " << name << " and major is " << major << endl;
    /*
    But if you enter two names with a space, or longer name than in setw(#)
    then this extra value (in the buffer) will be passed to the following cin.
    */

    return 0; 
}