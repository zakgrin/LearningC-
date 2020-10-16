# include<iostream>
using namespace std;

int main(){

    string test = "reverse"; // "enter", "year", "reverse"
    /* Remainder Properties:
        1 - remainder = 0 if x/y division is int else != 0 (remainder)
        2 - remainder of 2
            - if x % 2 == 0: even number
            - if x % 2 != 0: odd number
        3 - remainder of x%y is always smaller than y
        4 - remainder can extract digits:
            (first digit)
            - 400 % 10 = 0,
            - 401 % 10 = 1,
            - 411 % 10 = 1,
            (first 2 digits)
            - 400 % 100 = 0,
            - 401 % 100 = 1,
            - 411 % 100 = 11,
        5 - remainder = x if x<y in x%y
    */

    if (test == "enter"){
        int x, y;
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;

        cout << "int division = " << x / y << endl;
        cout << "remainder = " << x % y << endl;
        }
    else if (test =="year"){
        int days = 365;
        cout << days / 7 << " weeks"; 
        cout << " & " << days % 7 << " days" << endl; 
    }
    else if (test == "reverse"){
        int x;
        cout << "Enter 3 digit nubmer: ";
        cin >> x;

        // "!" not it flips all signs based on Demorgan rule
        // !(x > 5) >> (x <= 5)
        // !(x < 5) >> (x >= 5)
        // !(x == 5) >> (x != 5)
        // !(x >= 5) >> (x < 5)
        // !(x <= 5) >> (x > 5)
        // !( && ) >> ( || )
        // !( || ) >> ( && )
        // (!(x >= 100 && x <= 999)) >> (x < 100 || x > 999))
        if (!(x >= 100 && x <= 999)){
            cout << "wrong number!" << endl;
            exit(1);
        }
        else{
            int n1 = x % 10;
            int n2 = (x / 10) % 10;
            int n3 = x / 100;
            cout << n1 << n2 << n3 << endl;
        }
    }
    
    return 0;
}