#include<iostream>
using namespace std;


void loop(int n){

    // Base Case: must be met at cartain point
    if (n == 0) // or (n <= 0) to exit immediately if input is -#
        return; // to exit
    cout << "Loop Backward " << n << endl;

    // Recursion Case:
    loop(n-1); // because each time we want to reduce until we reach 0.
    cout << "Loop Forward " << n << endl;
}

int power(int n, int p){
    
    // Base Case:
    if (p<=0)
        return 1;
    // Recursion Case:
    return n * power(n, p-1);
}

int factorial(int n){
    // Base Case:
    if (n == 1 || n == 0)
        return 1;
    // Recursion Case:
    return n * factorial(n-1);
}

int main(){
    loop(5);
    cout << "10^3 = " << power(10, 3) << endl;
    cout << "4! = " << factorial(4) << endl;
    return 0;
}