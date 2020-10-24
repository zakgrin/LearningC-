#include <iostream>
using namespace std; 

#ifndef USER_H
#define USER_H

class User
{
private: 
    string username, password; 
public: 
    // User(string, string);
    void setUsername(string);
    void setPassword(string);
    string getUsername();
    string getPassword();
}; 

#endif

// User::User(string u, string p)
// {
//     setUsername(u); 
//     setPassword(p);
// }
void User::setUsername(string u)
{
    username = u;
}
void User::setPassword(string p)
{
    password = p; 
}
string User::getUsername()
{
    return username;
}
string User::getPassword()
{
    return password;
}