#include<iostream>
using namespace std;

// Function Definitions:
void draw();
void replace(int, char);
bool checkAvailability(int);
bool checkWinner(char);
void initCharacters();

// Global Variables:
char c1, c2, c3, c4, c5, c6, c7, c8, c9;
char currentPlayer = 'X';

int main(){
    
    while(true){

        cout << "Welcome to X/O Game!" << endl;
        
        int input;
        int counter = 0;
        initCharacters();
        draw();

        while(true){
            
            //cout << "Please enter a number [1-9]: ";
            cout << "Player " << currentPlayer << ": ";
            cin >> input;

            while(!checkAvailability(input)){
                cout << "Input is either booked or not correct" << endl;
                cout << "Please enter another number" << endl;
                cin >> input;
            }
            
            if (counter % 2 == 0){
                replace(input, currentPlayer);
                currentPlayer = 'O';
            }
            else{
                replace(input, currentPlayer);
                currentPlayer = 'X';
            }

            counter++;
            draw();

            if (checkWinner('X') || checkWinner('O')){
                // cout << currentPlayer << " is the winner!" << endl;
                // cout << "Do you want to play again: ";
                // cin >>
                break; 
            }
            else if (counter == 9){
                cout << "draw!";
                break;
            }
        }
        
        cout << "Do you want to continue?" << endl;
        cout << "1. Continue" << endl;
        cout << "2. Exit" << endl;
        cin >> input;

        if (input == 1)
            continue;
        break; // exit(0);

    }
    return 0;
}

void initCharacters(){
    c1 = '1';
    c2 = '2';
    c3 = '3';
    c4 = '4';
    c5 = '5';
    c6 = '6';
    c7 = '7';
    c8 = '8';
    c9 = '9';
}

void draw(){
    cout << "\t" << c1 << "\t|\t" << c2 << "\t|\t" << c3 << endl;
    cout << "\t----------------------------------" << endl;
    cout << "\t" << c4 << "\t|\t" << c5 << "\t|\t" << c6 << endl;
    cout << "\t----------------------------------" << endl;
    cout << "\t" << c7 << "\t|\t" << c8 << "\t|\t" << c9 << endl;
    cout << "\t----------------------------------" << endl;
}

void replace(int input, char C){
    switch (input)
    {
    case 1:
        c1 = C;
        break;
    case 2:
        c2 = C;
        break;
    case 3:
        c3 = C;
        break;
    case 4:
        c4 = C;
        break;
    case 5:
        c5 = C;
        break;
    case 6:
        c6 = C;
        break;
    case 7:
        c7 = C;
        break;
    case 8:
        c8 = C;
        break;
    case 9:
        c9 = C;
        break;
    default:
        break;
    }
}

bool checkAvailability(int input){

    if(input < 1 || input > 9)
        return false;

    switch (input){
        case 1:
            if (c1 == '1')
                return true;
            break;
        case 2:
            if (c2 == '2')
                return true;
            break;
        case 3:
            if (c3 == '3')
                return true;
            break;
        case 4:
            if (c4 == '4')
                return true;
            break;
        case 5:
            if (c5 == '5')
                return true;
            break;
        case 6:
            if (c6 == '6')
                return true;
            break;
        case 7:
            if (c7 == '7')
                return true;
            break;
        case 8:
            if (c8 == '8')
                return true;
            break;
        case 9:
            if (c9 == '9')
                return true;
            break;
            
    }

    return false;

}

bool checkWinner(char player){

    bool row1 = (c1 == player && c2 == player && c3 == player);
    bool row2 = (c4 == player && c5 == player && c6 == player);
    bool row3 = (c7 == player && c8 == player && c9 == player);
    bool col1 = (c1 == player && c4 == player && c7 == player);
    bool col2 = (c2 == player && c5 == player && c8 == player);
    bool col3 = (c3 == player && c6 == player && c9 == player);
    bool dia1 = (c1 == player && c5 == player && c9 == player);
    bool dia2 = (c3 == player && c5 == player && c7 == player);

    if (row1 || row2 || row3 || col1 || col2 || col3 || dia1 || dia2){
        cout << player << " is the winner!" << endl;
        return true;
    }
    return false;

}