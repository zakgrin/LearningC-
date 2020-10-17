#include<iostream>
using namespace std;

// We have to define function type in arguments type:
int callByValueIncrement(int); // Call by value
void callByReferenceIncrement(int &); // Call by reference
void callByReferenceIncrement2(int &, int &); // Call by reference for two int

int main(){

    // Call by value:
    int number_1 = 0;
    number_1 = callByValueIncrement(number_1);
    cout << number_1 << endl;

    // Call by reference:
    int number_2 = 10;
    callByReferenceIncrement(number_2);
    cout << number_2 << endl;

    // Call by reference:
    callByReferenceIncrement2(number_1, number_2);
    cout << "number 1 = " << number_1 << endl;
    cout << "number 2 = " << number_2 << endl;


    return 0;
}

int callByValueIncrement(int input){
    return ++input;
}

void callByReferenceIncrement(int &input){ // note here we use a pointer
    ++input;
}

void callByReferenceIncrement2(int &input1, int &input2){ // note here we use a pointer
    ++input1;
    ++input2;
}