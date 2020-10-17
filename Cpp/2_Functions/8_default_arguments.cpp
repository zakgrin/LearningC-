#include<iostream>
using namespace std;

void printUserData(string name, string email = "-", string phone = "-");

int main(){

    printUserData("Ahmed", "gg@gmail.com", "1234");
    printUserData("Ahmed", "gg@gmail.com");
    printUserData("Ahmed");

    return 0;
}

void printUserData(string name, string email, string phone){
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phone << endl;
    cout << endl;
}