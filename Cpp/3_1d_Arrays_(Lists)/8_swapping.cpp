#include<iostream>
using namespace std;

void swap(int &, int &);

int main(){
    
    int x = 10;
    int y = 20;

    cout << "before:    x = " << x << " | y = " << y << endl;
    swap(x, y);
    cout << "after:     x = " << x << " | y = " << y << endl;
}

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}