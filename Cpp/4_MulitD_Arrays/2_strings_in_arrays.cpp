#include<iostream>
using namespace std;

int main()
{
    // Strings are arrays: 
    string str = "C++";
    cout << str[0] << endl;

    // We can creat array of characters:
    char c1[4] = {"C++"}; // or c[] = {"C++"}
    cout << c1[0] << endl;

    // same as:
    char c2[4] = {'C','+','+','\0'}; // c[] = {'C','+','+','\0'};
    cout << c2[0] << endl;

    // Notes with arrays of characters: 
    // - {} are not mandatory and length is #char + 1
    // - 1 additional space is added for null character to indicate the string end.
    
    return 0;
}