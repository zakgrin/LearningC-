#include<iostream>
using namespace std; 

int main()
{
    /*
    Example 3: eliminate cin input issues with length and space
    You have to creat char lists with enough space.
    (cin.getline will not work properly with normal cin in the same file)
    */
    char myName[20]; 
    char myMajor[20]; 
    
    cout << "Please enter your name: ";
    cin.getline(myName, 20, '\n'); // only enter will go to the following input!

    cout << "Please enter your Major: ";
    cin.getline(myMajor, 20, '\n'); // will get any data from buffer before running!
    
    /* ~RESULT~
    Please enter your name: Ali Mohamed
    Please enter your Major: Data Engineering
    Name is Ali Mohamed and major is Data Engineering
    */
    cout << "Name is " << myName << " and major is " << myMajor << endl;
}