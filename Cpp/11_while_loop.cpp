#include<iostream>
using namespace std;

int main(){

    // 1. Range Loop:
    int counter = 1;
    while (counter <= 10){
        cout << counter << " ";
        counter++;    
    }

    // 2. Infinite Loop:
        /* There are two ways to control loops:
        - break: to exit the entire loop
        - continue: to continue to next loop without reading the code below
                    (ignore the rest of the code)
        */
    int n = 0;
    while (true){
        n++;
        if (n == 5)
            continue;
        cout << n;
        if (n == 8)
            break; // exit condition.
    }

    return 0;
}