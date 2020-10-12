#include<iostream>
using namespace std;

int main(){

    double apple = 40;
    double orange = 30;

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

    return 0;
}