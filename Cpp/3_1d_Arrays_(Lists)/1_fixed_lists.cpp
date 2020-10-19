#include<iostream>
#include<cstdlib> // random numbers
#include<ctime> // time 
using namespace std;

// All lists here have constant size
int main(){

    srand(time(0));

    // Define list size
    const int size = 5;

    // Creat List: way1
    int list[size] = {1,2,3,4,5};

    // Print list items:
    cout << "list: pointer " << list << endl;
    cout << list[0] << endl;
    cout << list[1] << endl;
    cout << list[2] << endl;
    cout << list[3] << endl;
    cout << list[4] << endl;

    // Creat List: way2 (size is taken from the list automatically)
    int list2[] = {1,2,3,4,5};

    // Creat List: way3
    int list3[size];
    list3[0] = 1;
    list3[1] = 2;
    list3[2] = 3;
    list3[3] = 4;
    list3[4] = 5;

    // Creat List: way4 (all items with 0 except the first ones defined)
    int list4[size] = {1,2};
    
    cout << "List 4: " << endl;
    for (int i = 0; i < size; i++)
        cout << list4[i] << endl;

    // Creat List: way5 
    int list5[size];
    cout << "list5:" << endl;
    for (int i=0; i<size; i++){
        list5[i] = rand()%10; // random numbers from 0 to 9
        cout << list5[i] << endl;
    }

}