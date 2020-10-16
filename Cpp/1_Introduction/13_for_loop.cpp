#include<iostream>
using namespace std;

int main(){

    // For Loops:
    // for(init; condition; increment){**code**}

    // Loop 1: for loop from 0 to 2 with increment of 1
    cout << "loop 1: " << endl;
    for(int i = 0; i < 3; i++){
        cout << i << endl;
    }

    // Loop 2: for loop from 0 to 9 with increament of 2
    cout << "loop 2: " << endl;
    for(int i = 0; i < 10; i+=2){
        cout << i << endl;
    }

    // loop 3: for loop from 10 to 0 with increment of -2
    cout << "loop 3: " << endl;
    for(int i = 10; i > 0; i-=2){
        cout << i << endl;
    }

    // loop 4:
    // initialization parameter can be defined outside of for loop
    // this was is not recomended 
    cout << "loop 4: " << endl;
    int i = 100;
    for(;i<1000;i+=100){
        cout << i << endl;
    }

    return 0;
}