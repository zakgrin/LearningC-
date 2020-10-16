#include<iostream>
using namespace std;

int main(){

    // Multiplicaiton table

    while(true){

        int number;
        cout << "Please enter the number for multiplication table: ";
        cin >> number;

        if (number == -1){
            exit(1);
        }

        for (int i=1; i<=12; i++){
            
            if (i < 10){
                cout << number << " x  " << i << " = " << number*i << endl;
            }
            else {
                cout << number << " x " << i << " = " << number*i << endl;
            }
        }
    }

    return 0;
}