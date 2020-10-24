#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std; 

int main()
{
    ofstream fout("2_output.txt"); 
    fout << setw(5) << "id" << setw(10) << "name" << setw(10) << "balance" << endl;
    int id; 
    string name; 
    double balance; 

    cout << "Please enter id name balance (Ctr+c to exit): "; 
    while (cin >> id >> name >> balance)
    {
        fout << setw(5) << id << setw(10) << name << setw(10) << balance << endl;
        cout << "Please enter id name balance (Ctr+c to exit): "; 
    }    
}