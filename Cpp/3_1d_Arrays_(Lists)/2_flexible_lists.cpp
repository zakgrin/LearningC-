#include<iostream>
#include<cstdlib> // random numbers
#include<ctime> // time 
using namespace std;

// Lists here have a semi-flexible size

int main(){
    int input;
    int grades[100] = {0}; // here we put a high size not expected to be reached.
    int size = 0;

    cout << "Please enter grades: " << endl;
    cin >> input;

    // Fill-in the List: 
    for (int i=0; i<100 && input!=-1; i++){
        size++;
        grades[i] = input;
        cin >> input; // must always be at the end of the for loop.
    }

    cout << "The following grades were entered: " << endl;
    // Print the list:
    for (int i=0; i<size; i++)
        cout << grades[i] << ", ";
    cout << endl;

    return 0;
}