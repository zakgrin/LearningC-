#include<iostream>
using namespace std;

bool search(int* list, int size, int key);

int main(){

    const int size = 5;
    int myList[size] = {10, 20, 30, 40, 50};

    if (search(myList, size, 1))
        cout << "key was found!";
    else
        cout << "key was not found!";
    
    return 0;
}

bool search(int* list, int size, int key){

    for(int i=0; i<size; i++){
        if (list[i] == key)
            return true;
    }

    return false;
}