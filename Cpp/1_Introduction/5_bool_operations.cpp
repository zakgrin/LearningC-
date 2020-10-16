#include<iostream>
using namespace std;


int main(){

    // Define Variables:
    int x = 10;
    int y = 10;
    int z = 30;

    // Binary Bool Operations;
    bool equal = x == y;
    bool notEqual = x != y;
    bool greater = x > y;
    bool less = x < y;
    bool greaterOrEqual = x >= y;
    bool lessOrEqual = x <= y;

    cout << "x = " << x << ", y = " << y << endl;
    cout << "x == y: " << equal << endl;
    cout << "x != y: " << notEqual << endl;
    cout << "x > y: " << greater << endl;
    cout << "!(x > y): " << !greater << endl;
    cout << "x < y: " << less << endl;
    cout << "x >= y: " << greaterOrEqual << endl;
    cout << "x <= y: " << lessOrEqual << endl;

    // Multiple Bool Operations: 
    // cout << "x == y == z: " << x == y == z << endl; // not allowed to compare 3 variables directly
    cout << "(x == y) and (x == z): " << ((x == y) && (x == z)) << endl; // we must include outer ()
    cout << "(x == y) or (x == z): " << ((x == y) || (x == z)) << endl;

    return 0;
}