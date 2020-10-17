#include<iostream>
using namespace std;

int main(){

    /*
    This program accepts unlimited number of grades and calculates sum and average of grades. 
    */
    cout << "Please enter grades: " << endl;
    cout << "(enter -1 to exit)" << endl;

    int grade;
    int sum = 0;
    int counter = 0;
    
    while(true){

        cin >> grade;
        if(grade == -1){
            break;
        }
        sum += grade;
        counter++;
    }

    double average = static_cast<double>(sum) / counter;
    cout << "Number of students = " << counter << endl;
    cout << "Sum of grade = " << sum << endl;
    cout << "Average grade = " << average << endl;

}