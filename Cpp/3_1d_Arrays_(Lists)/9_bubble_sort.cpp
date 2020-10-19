#include<iostream>
using namespace std;

void printList(int*, int);
void swap(int &, int &);
int bubbleSort(int* list, int size, bool ascending = true); // no need to use pointer with lists!

int main(){
    const int mySize = 5;
    int myList[mySize] = {3,5,2,1,4};

    printList(myList, mySize);
    bubbleSort(myList, mySize);
    printList(myList, mySize);
    bubbleSort(myList, mySize, false);
    printList(myList, mySize);
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

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

// no need to use pointer with lists (not int* &list)
// because lists are passed by reference already!
int bubbleSort(int* list, int size, bool ascending){

    if (ascending)
    {
        for (int i=0; i<size; i++){
            for (int j=0; j<size-1; j++){
                if (list[j] > list[j+1])
                    swap(list[j], list[j+1]);
            }            
        }
    }
    else
    {
        for (int i=0; i<size; i++){
            for (int j=0; j<size-1; j++){
                if (list[j] < list[j+1])
                    swap(list[j], list[j+1]);
            }            
        }
    }
    
    return 0;
}