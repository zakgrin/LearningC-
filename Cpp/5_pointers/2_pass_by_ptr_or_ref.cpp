#include<iostream>
using namespace std;

void addByVal(int, int);
void addByRef(int &, int &);
void addByPtr(int *, int *);
void print(int, int); 

int main(){

    int x = 10; 
    int y = 20;
    print(x, y);
    addByVal(x, y); 
    print(x, y);
    addByRef(x, y);
    print(x, y);
    addByPtr(&x, &y); // we have to pass pointers!
    print(x, y);
    cout << "- note that addByRef does the same job and is simpler than addByPtr." << endl << endl;

    // but note that & is used to pass be reference even with variables: 
    int x1 = 1;
    int x2 = x1;  // pass by value. 
    int &x3 = x1; // pass by reference.
    int *x4 = &x1; // pass by pointer.
    cout << "Initial values: " << endl; 
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "x3 = " << x3 << endl;
    cout << "x4 = " << x4 << endl;
    x2++;
    cout << "After x2++: " << endl; 
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "x3 = " << x3 << endl;
    cout << "x4 = " << x4 << endl;
    x3*=3;
    cout << "After x3*=3: " << endl; 
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "x3 = " << x3 << endl;
    cout << "x4 = " << x4 << endl;
    *x4*=3;
    cout << "After *x4*=3: " << endl; 
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "x3 = " << x3 << endl;
    cout << "x4 = " << x4 << " (pointer)" << endl; 
    cout << "- note that & is simpler to use for pass by reference." << endl << endl;

    return 0;
}

void addByVal(int x, int y)
{
    cout << "Add By Val:" << endl;
    x++;
    y++;
    return;
}

void addByRef(int &x, int &y)
{
    cout << "Add By Ref:" << endl;
    x++;
    y++;
    return;
}

void addByPtr(int *x, int *y)
{ 
    // this function accepts only pointers! 
    cout << "Add By Ptr:" << endl;
    (*x)++; // *x++ works but not recommended
    (*y)++; // *y++ works but not recommended
    return;
}
void print(int x, int y)
{
    cout << "x = " << x << endl; 
    cout << "y = " << y << endl; 
} 

