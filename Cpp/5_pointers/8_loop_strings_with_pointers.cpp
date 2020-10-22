#include<iostream>
using namespace std; 

int main()
{
    /*
    There are several ways to define a string: 
    */

    char myCharList[100] = "Zakariya"; // List of characters 
    string myString = "Zakriya"; // String
    char *myPointer = "Zakariya";  // Pointer to a charcter can be used but: 
    // warning: ISO C++ forbids converting a string constant to 'char*'
    
    /*
    Lists are better than pointers to use strings because:
    - we can define the size.
    - we can change it 
      (becase in case of a pointer, only finxed memorey size is booked
       based in the first assignment.)
    */

    /*
    Loop by a pointer
    */
    cout << "Please enter your name: "; 
    char name[100];
    cin >> name; 
    char *ptr = name; 

    for(; *ptr !='\0'; ptr++)
    {
        cout << *ptr << ' '; 
    }
    cout << endl; 

    /*
    Compare text by pointers
    */
    // sentences: 
    cout << "Please enter the word 1: ";
    char word1[100]; 
    cin >> word1; 
    cout << "Please enter the word 2: ";
    char word2[100]; 
    cin >> word2;
    // pointers: 
    char *ptr1 = word1; 
    char *ptr2 = word2; 
    // loop and compare; 
    for (; *ptr1 != '\0' && *ptr2 != '\0'; ptr1++, ptr2++)
    {
        if (*ptr1 != *ptr2)
        {
            cout << "The input words are different" << endl; 
            return 1; // exit the main function! 
            exit(1); // same as return 1 but exit the entire program.
        }
    }

    cout << "The input words are the same" << endl;
    return 0;
}