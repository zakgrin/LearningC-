#include<iostream>
using namespace std;

int main(){

    double apple = 40;
    double orange = 20;

    // Basic Operations:
    int sum = apple + orange;
    int dif = apple - orange;
    int mul = apple * orange;
    int i_div = apple / orange;
    double d_div = apple / orange;

    cout << "sum = " << sum << endl;
    cout << "dif = " << dif << endl;
    cout << "mul = " << mul << endl;
    cout << "integer div = " << i_div << endl;
    cout << "double div = " << d_div << endl;
    
    // Special Form: 
    int j = 1; 
    j = j + 1;
    j++; // to add 1
    ++j; // to add 1
    j += 1; // to add any number
    j -= 1; // to substract any number
    j *= 2; // to multiply by any number
    j /= 2; // to devide by any number
    cout << "j = " << j << endl;

    // Understanding Operations:
    int c = 1;
    cout << "c=" << c << endl;
    cout << "c++=" << c++ << endl; // addition after line
    cout << "c=" << c << endl; // here we see value of 2
    cout << "++c=" << ++c << endl; // addition during the line, here we see value of 3

    return 0;
}