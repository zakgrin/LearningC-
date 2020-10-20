#include<iostream>
using namespace std;

int main()
{
    // Print Pointers: 
    cout << "Define variables and print their pointers: " << endl;    
    int x = 100;
    double y = 200; 
    cout << "x = " << x << " (address in RAM &x: " << &x << ")." << endl;
    cout << "y = " << y << " (address in RAM &y: " << &y << ")." << endl;
    // result: 
    // x = 100 (address in RAM: 0x61ff0c).
    // y = 200 (address in RAM: 0x61ff08).
    // These numbers are not strings or integers!

    // Pointer Definition: 
    // we have to add * to define a pointer!
    // pointers must have the same type as their variables!
    //  this type is not the pointer type but mean a pointer points to this type! 
    cout << "Define pointers as variables and print their address: " << endl;    
    int *xPointer = &x; 
    cout << "xPointer = " << xPointer << endl;
    double *yPointer = &y;
    cout << "yPointer = " << yPointer << endl;

    // Get values from pointers:
    cout << "We can use * to get the value poiners refer to: " << endl;
    cout << "*xPointer = " << *xPointer << endl;
    cout << "*yPointer = " << *yPointer << endl; 
    cout << "- note: * is used to define a pointer and to access pointer value!" << endl;

    // Pointer can be defined in one line with their variables:
    int i = 10, *iPtr = &i;
    int j = 20, *jPtr = &j;

    // Common mistakes in pointer definitions:
    int* Ptr1, Ptr2, Ptr3;
    // IN THIS CASE; only Ptr1 is a pointer and both Ptr2 & Ptr3 are not.
    // THEREFORE, * should be attached to the variable name and not the type.
    // right way:
    int *Ptr4, *Ptr5, *Ptr6;

    // Remove a pointer value:
    cout << "Pointers can be disconnected: " << endl;
    int value = 200, *valuePtr = &value;
    cout << "valuePtr (original) = " << valuePtr << " - value = " << *valuePtr << endl;
    valuePtr = NULL; // or 0
    cout << "valuePtr (after) = " << valuePtr << " - value = " << endl; // << *valuePtr << endl; // code will not continue
    cout << "- note: no value after removing the pointer." << endl;

    // Changing variables values from a pointer: 
    int initVal = 33, *initValPtr = &initVal;
    cout << "initVal = " << initVal << " | pointer (initValPtr) = " << initValPtr << endl;
    *initValPtr = 222;
    cout << "initVal = " << initVal << " | pointer (initValPtr) = " << initValPtr << endl;

    // Changing a pointer from one variable to another: 
    int x1 = 111, x2 = 222;
    cout << "x1 = " << x1 << " (pointer: " << &x1 << ")." << endl;
    cout << "x2 = " << x2 << " (pointer: " << &x2 << ")." << endl;
    // here we change x1 value
    int *xPtr = &x1;
    *xPtr = 333; // same as: x1 = 333;
    cout << "xPtr = " << xPtr << endl;
    cout << "x1 = " << x1 << " (pointer: " << &x1 << ")." << endl;
    cout << "x2 = " << x2 << " (pointer: " << &x2 << ")." << endl;
    // here we change x2 value
    xPtr = &x2;
    *xPtr = 444; // same as: x2 = 444;
    cout << "xPtr = " << xPtr << endl;
    cout << "x1 = " << x1 << " (pointer: " << &x1 << ")." << endl;
    cout << "x2 = " << x2 << " (pointer: " << &x2 << ")." << endl;
    // Note that *& they cancel each other:
    cout << "The effect of *&: " << endl;
    cout << "xPtr = " << xPtr << " (pointer value)" << endl;
    cout << "&xPtr = " << &xPtr << " (pointer address - not important)" << endl;
    cout << "*xPtr = " << *xPtr << " (pointer value points to)" << endl;
    cout << "&*xPtr = " << &*xPtr << " (pinter value)" << endl;
    cout << "*&xPtr = " << *&xPtr << " (pinter value)" << endl;
    cout << "- note &* in &*xPtr cancel each other." << endl;

    // Pointer stars with multiplication stars:
    x1 = 2; 
    x2 = 4; 
    int *xPtr1 = &x1;
    cout << "xPtr = " << xPtr << endl;
    cout << "x1 = " << x1 << " (pointer: " << &x1 << ")." << endl;
    cout << "x2 = " << x2 << " (pointer: " << &x2 << ")." << endl;
    cout << "x1**xPtr1*x2 (same as: x1*x1*x2)= " << x1**xPtr1*x2 << endl;
    cout << "- note the *xPtr can be mixed with * for multiplication" << endl;

    // Pointers Series can be defined with multiple **: 
    int **xPtr2 = &xPtr1; // here we have to use ** because we use pointer on a pointer
    // we must use two stars, we will have error when xPtr2 = &xPtr1 or *xPtr2 = &xPtr1!
    cout << "xPtr1 = " << xPtr1 << " (pointer: " << &xPtr1 << ")." << endl;
    cout << "xPtr2 = " << xPtr2 << " (pointer: " << &xPtr2 << ")." << endl;
    cout << "*xPtr1 = " << *xPtr1 << endl;
    cout << "*xPtr2 = " << *xPtr2 << endl; 
    cout << "**xPtr1 = error (because it is not a pointer on a pointer)." << endl;
    cout << "**xPtr2 = " << **xPtr2 << endl; 
    cout << "x1***xPtr2*x2 (same as: x1**xPtr1*x2 > x1*x1*x2)= " << x1***xPtr2*x2 << endl;
    cout << "- note that pointer * has first piority over multiplication *" << endl;

    // and so on: 
    int ***xPtr3 = &xPtr2;
    int ****xPtr4 = &xPtr3;  

    return 0;
 }