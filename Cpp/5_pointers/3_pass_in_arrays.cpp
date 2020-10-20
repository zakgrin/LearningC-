#include<iostream>
using namespace std; 

void passToArray(int array[])
{
    
    return;
}

void passToArrayByPointer(int *array)
{
    
    return;
}

int main()
{
    // Arrays are in fact pointers !!!!
    int a = 5;
    int array[5] = {1, 2, 3, 4, a}; 
    cout << "Initial: " << endl;
    cout << array << " >> this is a pointer value!" << endl;
    cout << "array[5] = " << array[5] << endl;
    array[5] = 0;
    cout << "After: array[5] = 0" << endl;
    cout << "array[5] = " << array[5] << endl;
    cout << "a = " << a << endl;
    a = 10;
    cout << "After: a = 10" << endl;
    cout << "array[5] = " << array[5] << endl;
    cout << "a = " << a << endl;

    //
    return 0;
}