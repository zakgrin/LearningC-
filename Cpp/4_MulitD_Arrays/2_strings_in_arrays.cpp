#include<iostream>
using namespace std;

int len(char text[]);

int main()
{
    // Strings are arrays: 
    string str = "C++"; 
    cout << str[0] << endl;

    // We can creat array of characters:
    char c1[4] = {"C++"}; // or c[] = {"C++"}
    cout << c1[0] << endl;

    // same as:
    char c2[4] = {'C','+','+','\0'}; // c[] = {'C','+','+','\0'};
    cout << c2[0] << endl;

    // Notes with arrays of characters: 
    // - {} are not mandatory and length is #char + 1
    // - 1 additional space is added for null character to indicate the string end.

    // Compare Char arrays with int arrays: 
    char text[] = "Hello World";
    cout << text << endl; // only for character arrays we can print directly without for loop! 
    int numbers[] = {1,2,3};
    cout << numbers << endl; // not values but the pointer number !!!

    // Char Array Length:
    int length;
    length = len(text); // we have to use null character '\0' to know the end of the array! 
    cout << "length = " << length << endl;

    // Print with spaces: 
    for (int i=0; text[i]!='\0'; i++)
        cout << text[i] << " ";
    cout << endl;

    // every characters in english takes 1 byte in memory, therefore index number is consistent
    // but this is not the case for other languages
    
    // Space issues with cin:
    // if we enter two words seperated by space, c++ takes only the first 
    // and sends the second word to the buffer which then passes 
    // this value to the next not allocated 'cin' command

    char name[20];
    char major[20];

    // try as two words (press enter): 
    //              >>"zak" "net" >> your name: zak - your major: net
    // try as one text (with space): "zak net" 
    //              >> enter your major: your name: zak - your major: net
    cout << "enter your name: ";
    cin >> name; 
    cout << "enter your major: ";
    cin >> major;

    cout << "your name: " << name << " - your major: " << major << endl;

    return 0;
}

int len(char text[])
{   
    int length = 0;
    for (int i=0; text[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}