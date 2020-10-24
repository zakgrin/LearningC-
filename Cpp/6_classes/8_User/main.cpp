#include <iostream>
#include "User.h"
using namespace std; 

int size = 0; 
User users[100]; // didn't work with the constructor.

int main()
{
    string username, password, choice; 

    while (true)
    {
        cout << "Please enter the username: "; 
        cin >> username; 
        cout << "Please enter the password: "; 
        cin >> password; 

        // User newUser(username, password); 
        User newUser; 
        newUser.setUsername(username); 
        newUser.setPassword(password);
        
        users[size++] = newUser; 

        for (int i=0; i<size; i++)
        {
            cout << i << ". " << users[i].getUsername() << endl;
        }

        cout << "c. continue | e. exit" << endl; 
        cin >> choice;
        if (choice == "e")
            break;
        else
            continue;       
    }
}
