#include<iostream>
using namespace std;

/*
Int functions return integer values
We must include return!
Functions have to be defined outside and before 'main'. 
*/

int square(int number){
    return number*number;
}

double pi(){
    return 3.14;
}

int max(int x, int y, int option = 0){

    // Basic Version:
    if (option == 1){
        if (x > y)
            return x;
        else
            return y;
    }
    // Shorter Version:
    else if (option == 2){
        if (x > y)
            return x;
        return y;
    }
    // Shortest Version:
    else{
        return (x > y ? x: y);
    }

    // better than this below: 'shorter and simpler'
    // else
    //     return y;
}

int main(){

    int number = 10;
    
    int squareNumber = square(number);
    cout << number << " Square = " << squareNumber << endl;
    
    cout << "pi = " << pi() << endl;

    int maxNumber = max(number, squareNumber);
    cout << maxNumber << endl;
}