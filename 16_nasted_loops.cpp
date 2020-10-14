#include<iostream>
using namespace std;

int main(){

    // Example 1: Square
    int height, width;
    cout << "Please enter the height: ";
    cin >> height;
    cout << "Please enter the width: ";
    cin >> width;

    for(int j=0; j<height; j++){
        for(int i=0; i<width; i++){ 
            cout << "* " ;
        }
        cout << endl;
    }

    // Example 2: Triangle
    int n;
    cout << "Please enter a number: ";
    cin >> n;

    for (int i=n; i>0; i--){
        for (int j=0; j<i; j++){
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}