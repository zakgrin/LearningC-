#include<iostream>
using namespace std;

void printList(int*, int);
void drawList(int*, int);

int main(){

    const int size = 60;
    const int range = 21;

    int list[] = {10, 11, 9, 10, 11, 18, 10, 12, 11, 9, 20, 20, 9,9,9, 8, 7, 6, 5, 10, 11, 5, 20, 15, 13, 14, 16, 20, 19, 20, 10, 11, 13, 14, 15, 5, 5, 5, 10, 20, 3, 10, 10, 20, 11, 2, 11, 20, 0, 6, 4, 5, 11, 14, 15, 16, 16, 17, 12, 11};
    int freqList[range] = {0}; // initial values are set to 0s.

    for (int i=0; i<size; i++)
        freqList[list[i]]++; // great idea here for the freqList!

    printList(list, size);
    printList(freqList, range);
    drawList(freqList, range);
    
    return 0;
}

void printList(int* list, int size){
    cout << "list: ";
    for (int i=0; i<size; i++){
        if (i == 0)
            cout << "[";
        if (i == size-1 )
            cout << list[i] << "]";
        else
            cout << list[i] << ", ";
        }
    cout << endl;
}

void drawList(int* list, int size){

    cout << "Value\t\tFrequency\tHistogram" << endl;
    for (int i=0; i<size; i++){
        cout << i << "\t\t" << list[i] << "\t\t"; // << list[i] << endl;
        for (int j=0; j<list[i]; j++)
            cout << "*";
        cout << endl;
    }
    cout << endl;

}