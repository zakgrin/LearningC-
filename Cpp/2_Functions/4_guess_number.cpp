#include<iostream>
#include<cstdlib> // random numbers library
#include<ctime> // time library 
using namespace std;

int main(){

    srand(time(0));


    cout << "Welcome to the Random Number Game!" << endl;
    cout << "Can you guess the number between 0 and 100?" << endl;
    
    int guessNumber;
    cin >> guessNumber; 

    do{
        int randNumber = 1 + rand() % 100;
        int counter = 0;
        
        while (guessNumber != randNumber){
            if (guessNumber > randNumber)
                cout << "smaller" << endl;
            else if (guessNumber < randNumber)
                cout << "larger" << endl;
            counter++;
            cin >> guessNumber; 
        }

        cout << "Success at " << guessNumber << " after " << counter << " trials" << endl;
        cout << "- enter another number between 0 and 100 to continue." << endl;
        cout << "- enter -1 to exit" << endl;
        cin >> guessNumber; 

    } while(guessNumber != -1);

    return 0;
}