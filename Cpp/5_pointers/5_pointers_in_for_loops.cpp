#include<iostream>
using namespace std;

void printList(int *list, int size)
{ // because a list is a pointer
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
    int myList[10] = {1,2,3,4,5,6,7,8,9,10};
    printList(myList, 10);

    cout << "way 1: increase pointer step " << endl;
    int *myPtr1 = myList; // same as: &myList[0]
    for (int i=0; i<10; i++)
    {
        cout << "pointer value = " << *myPtr1 << " (pointer: " << myPtr1 << ")"<< endl;
        myPtr1++;
    }

    // or
    cout << "way 2: increase pointer step in for" << endl;
    int *myPtr2 = myList;
    for (int i=0; i<10; myPtr2++,i++)
    {
        cout << "pointer value = " << *myPtr2 << " (pointer: " << myPtr2 << ")"<< endl;
    }

    // or
    cout << "way 3: decrease pointer step" << endl;
    myPtr2--; // keep in the last location
    for (int i=0; i<10; myPtr2--,i++)
    {
        cout << "pointer value = " << *myPtr2 << " (pointer: " << myPtr2 << ")"<< endl;
    }

    return 0; 
}