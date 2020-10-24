#include <iostream>
#include <fstream> // to write and read from files
using namespace std; 

int main()
{
    // Create text file and write: 
    fstream fout("1_output.txt", ios::out); // or ofstream fout("1_output.txt"); 
    fout << "Hello World 1" << endl; 
    fout << "Hello World 2" << endl; 
    fout.close();

    // Append to an existing file: 
    fstream fapp("1_output.txt", ios::app); 
    fapp << "Hello World 3" << endl; 
    fapp << "Hello World 4" << endl; 
    fapp.close();

    // Read existing file: 
    fstream fin("1_output.txt", ios::in); // or ifstream fout("1_output.txt"); 
    string str; 
    while (fin >> str) // or while (EOF): continue until the end of the file!
        cout << str << " "; // << endl;
}