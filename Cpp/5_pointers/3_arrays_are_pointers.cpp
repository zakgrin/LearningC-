#include<iostream>
using namespace std; 


void printPointer(int *ptr)
{
    cout << "pointer: " << ptr << endl;
}

void printPointerVal(int *ptr)
{
    cout << "value points to (*ptr): " << *ptr << endl;
    // or
    cout << "value points to (ptr[0]): " << *ptr << endl;
}

void printList(int *list, int size)
{ // because a list is a pointer
    cout << "list: ";
    for (int i=0; i<size; i++){
        if (i == 0)
            cout << "[";
        if (i == size-1 )
            cout << list[i] << "]";
        else
            cout << list[i] << ", ";
        }
    cout << endl;
}

int main()
{
    // Arrays are in fact pointers !!!!
    int a = 5;
    int array[5] = {1, 2, 3, 4, a}; 
    cout << "Initial: " << endl;
    printList(array, 5);
    cout << array << " >> as you can see, this is a pointer value!" << endl;
    cout << endl;
    // cout << "array[ ] = " << array[5] << endl;
    // cout << endl;
    // array[5] = 0;
    // cout << "After: array[5] = 0" << endl;
    // cout << "array[5] = " << array[5] << endl;
    // cout << "a = " << a << endl;
    // cout << endl;
    // a = 10;
    // cout << "After: a = 10" << endl;
    // cout << "array[5] = " << array[5] << endl;
    // cout << "a = " << a << endl;
    // cout << "- note how values are passed by reference for arrays/lists" << endl;

    // We can deal with an array as a pointer: 
    int *pointer = array; // since array is a pointer, then we don't need to write &array!
    printPointer(pointer);
    printPointerVal(pointer); // note that this is the 1st value in the array!
    cout << "Arrays are pointers and these pointers are for the first value in the list!" << endl;

    //
    return 0;
}