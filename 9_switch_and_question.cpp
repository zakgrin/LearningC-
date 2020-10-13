#include<iostream>
using namespace std;

int main(){

    // Switch is used instead of multiple if with is_equal test
        // 2. If-Else If-Else Operations: Calculator
    int choice;

    cout << "Please select the language" << endl
         << "1. English" << endl
         << "2. French" << endl
         << "3. Spanish" << endl
         << "4. German" << endl;

    cout << "Choice: "; 
    cin >> choice;

    // if(choice == 1)
    //     cout << "Hello!" << endl;
    // else if(choice == 2)
    //     cout << "Bonjour!" << endl;
    // else if(choice == 3)
    //     cout << "Hola!" << endl;
    // else if(choice == 4)
    //     cout << "Hallo!" << endl;
    // else
    //     cout << "wrong option was selected!" << endl;
    
    // switch equivelant: 
    // this shows that if is more general and powerfull 
    // do not forget break (without break cases, following cases will be excuted).
    switch (choice){
        case 1:
            cout << "Hello!" << endl;
            break;
        case 2:
            cout << "Bonjour!" << endl;
            break;
        case 3:
            cout << "Hola!" << endl;
            break;
        case 4:
            cout << "Hallo!" << endl;
            break;
        default:
            cout << "wrong option was selected!" << endl;
            break;
    }

    return 0;
}