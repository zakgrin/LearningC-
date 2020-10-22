#include<iostream>
#include<string.h>
using namespace std; 

int main()
{
    /*
    Copy Strings: 
    */
    char myName[] = "Zakariya";
    // char myNameCopy[] = myName; // can't equal a list with another list.
    // to copy a string/char list, we use string.h library: 
    char myNameCopy[10]; // must specify the size
    cout << "strcpy: ";
    strcpy(myNameCopy, myName);
    cout << myNameCopy << endl;

    /*
    Copy N Strings: 
    */
    char myNameCopyN[10];
    strncpy(myNameCopyN, myName, 3);
    cout << "strncpy: ";
    cout << myNameCopyN << endl;

    /*
    Concatenate N Strings: 
    */ 
    char fristNameCat[20] = "Zakariya ";
    char lastNameCat[20] = "Abu Grin";
    cout << "strcat: ";
    strcat(fristNameCat, lastNameCat); // note that the first argument is the distination.  
    cout << fristNameCat << endl; 

    /*
    Compare Strings:
    */
    char str1[20] = "Zakariya";
    char str2[20] = "Zakariya Abu Grin";
    cout << "ctrcmp: ";
    if (strcmp(str1, str2) == 0)
    {
        cout << "names are the same" << endl;
    }
    else
    {
        cout << "names are different" << endl; 
    }
    /*
    Compare N Strings:
    */
    cout << "ctrncmp: ";
    if (strncmp(str1, str2, 8) == 0)
    {
        cout << "names are the same" << endl;
    }
    else
    {
        cout << "names are different" << endl; 
    }

    /*
    String Length:
    */
    cout << "ctrncmp: ";
    cout << strlen(str2) << endl; 
    
    return 0; 
}