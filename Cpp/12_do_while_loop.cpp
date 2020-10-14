#include<iostream>
using namespace std;

int main(){

    /*
    Compared to "while", 
    - The loop "do while" starts with the code before the condition.
    */

   int counter = 10;
   
   // 1. While Loop:
   while (counter < 10) { // loop will not enter because the condition is not met.
       cout << counter << endl;
       counter++;
   }

    // 2. Do While Loop:
    do {
       cout << counter << endl;
       counter++;
    } while (counter < 10);
    
    return 0;

}