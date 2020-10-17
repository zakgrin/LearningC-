#include<iostream>
using namespace std;

void printCounter();
// int counter = 0; // global variable (not needed since line 18 does the job)

int main(){
    
    printCounter();
    printCounter();

    return 0;
}

void printCounter(){
    // static: only used at first time.
    // when this function called again, this line will be ignored.
    static int counter = 0; // by this we don't need a global variable (line 5).
    cout << ++counter << endl; // prints and saves the value.
}