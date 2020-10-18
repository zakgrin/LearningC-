#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // Spacing numbers:
    for (int i=2; i<=1024; i*=2){
        cout << setw(4) << i << endl;
    }
    for (int i=2; i<=1024; i*=2){
        cout << setfill(' ') << setw(4) << i << endl;
    }
    for (int i=2; i<=1024; i*=2){
        cout << setfill('0') << setw(4) << i << endl;
    }

    // Control floating number:
    double pi = 22.0/7;
    cout << setprecision(100) << pi << endl;

    /*
    Print Table: 
    */
   
    const int size = 6;
    string names[size] = {"Ahmed", "Ali", "Omar", "Fadi", "Nori", "Rami"};
    int ages[size] = {12, 22, 14, 15, 24, 30};
    double heights[size] =  {1.77, 1.76, 1.56, 1.82, 1.63, 1.43};


    cout << setfill(' ') << setw(9) << "Name" << setw(9) << "Age" << setw(9) << "Height" << endl;
    cout << setfill('-') << setw(9*3) << "-" << endl;
    
    // to set table settings:
    cout << setprecision(3);
    cout << setfill(' ');
    for (int i=0; i<size; i++)
        cout << setw(9) << names[i] << setw(9) << ages[i] << setw(9) << heights[i] << endl;
}