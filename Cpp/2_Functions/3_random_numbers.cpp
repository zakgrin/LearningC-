#include<iostream>
#include<cstdlib> // random numbers library
#include<ctime> // time library 
using namespace std;

void printRandom(int number){
    // The first way is to set the seed to a number
    srand(41);
    // but same numbers will appear every time (even without setting the seed)
    
    // The best way to use random numbers is to set seed to time
    // time(0) returns time in seconds since 1971
    int timeVal = time(0);
    srand(timeVal);

    for (int i = 0; i < number; i++){
        // remainder can limit numbers to 10
        cout << timeVal << " - " << rand() % 10 << endl;
    }
}

void printRandomInRange(int start, int end){
    srand(time(0));
    cout << start + rand() % (end-start+1) << endl;
}

int main(){

    // Example 1: 10 random numbers between 0 and 10
    printRandom(1);

    // Example 2: but how can we generate numbers in a defined range?
    // we can control that using the remainder 
    // randNum = start + rand() % (end-start+1)
    // end is inclusiv here (remove 1 to exclude)
    printRandomInRange(1,10);
}