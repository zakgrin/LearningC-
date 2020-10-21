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
    // How can we know the size of these variables in memory?
    cout << "Normal Variables: " << endl; 
    int myInt = 1;
    double myDoub = 1;
    char myChar = 'A'; 
    cout << "   - myInt  = " << myInt  << " (size: " << sizeof(myInt)  <<" bytes)"<< endl;
    cout << "   - myDoub = " << myDoub << " (size: " << sizeof(myDoub) <<" bytes)"<< endl;
    cout << "   - myChar = " << myChar << " (size: " << sizeof(myChar) <<" bytes)"<< endl;

    cout << "List Variables: " << endl; 
    char myStr[] = "Hello"; // this is a list of characters with null character after the last item.
    int  myNums[] = {1,2,3,4,5}; // here there is no null character.
    cout << "   - myStr  (char) = " << myStr  << " (size: " << sizeof(myStr)  << " bytes)" << endl;
    cout << "   - myNums (int)  = " << myNums << " (size: " << sizeof(myNums) << " bytes)" << endl;
    cout << "     (note: here size is 6 because there is NULL character '\0')" << endl;

    // We can calculate the length!:
    cout << "Length myStr  (char): " << endl; 
    cout << "   - sizeof(myStr) / sizeof(char) - 1 = " << sizeof(myStr) / sizeof(char) - 1 << endl;
    cout << "Length myNums (int) : " << endl; 
    cout << "   - sizeof(myNums) / sizeof(int)     = " << sizeof(myNums) / sizeof(int) << endl;
    
    // We can move the pointer by addition: 
    int *myNumsPtr = &myNums[0]; // we set the pointer for the first item = 1. 
    cout << endl;
    cout << "myNums = ";
    printList(myNums, 5);
    cout << "*myNumsPtr   = " << *myNumsPtr << endl;
    cout << "*myNumsPtr++ = " << *myNumsPtr++ << " (addition after the line!)" << endl;
    cout << "*myNumsPtr = " << *myNumsPtr << endl;
    cout << "*++myNumsPtr = " << *++myNumsPtr << " (addition with the line!)" << endl;
    cout << "*(myNumsPtr+2) = " << *(myNumsPtr+2) << " (addition with the line!)" << endl;
    cout << " - note that adding 1 to a pointer moves it to the following location!." << endl;

    return 0;
}