#include<iostream>
using namespace std;

int main(){

    // 1. If-Else Operation: Password
    const int password = 1234;
    int input;

    cout << "Please enter the password: ";
    cin >> input;

    if(input == password){
        cout << "Password is correct!" << endl; 
    }
    // else only used after "if"
    else{
        cout << "Password is wrong!" << endl;
    }

    // 2. If-Else If-Else Operations: Calculator
    int choice;

    cout << "Please select the operations" << endl
         << "1. addition" << endl
         << "2. substraction" << endl
         << "3. multiplication" << endl
         << "4. division" << endl;

    cout << "Choice: "; 
    cin >> choice;

    if(choice >= 1 && choice <= 4){
        int num_a, num_b; // better to define inside if when it is not needed outside
        cout << "1st number: ";
        cin >> num_a;

        cout << "2nd number: ";
        cin >> num_b;

        if(choice == 1) // curly brackets are not needed when if is oneline
            cout << num_a << " + " << num_b << " = " << num_a + num_b << endl;
        
        if(choice == 2)
            cout << num_a << " - " << num_b << " = " << num_a - num_b << endl;

        if(choice == 3)
            cout << num_a << " * " << num_b << " = " << num_a * num_b << endl;
        
        if(choice == 4)
            cout << num_a << " / " << num_b << " = " << num_a / num_b << endl;
    }
    else{
        cout << "wrong option was selected!" << endl;
    }

    return 0;
}