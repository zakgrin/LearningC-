#include<iostream>
using namespace std;

void printList(int*, int);
int len(int*); // not ready!

int main(){
    
    int sum = 0;
    double avg;

    const int size = 5;
    int list[size] = {90, 93, 89, 85, 88};
    
    for (int i=0; i<size; i++)
        sum += list[i];

    avg = static_cast<double>(sum) / size;

    // len(list); // not ready!
    printList(list,  size); 
    cout << "sum = " << sum << endl;
    cout << "avg = " << avg << endl;
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

int len(int* list){ // not ready!
    int length;
    for (int i=0; i<100; i++)
        if (list[i]!=0)
            length++;
    cout << "List length = " << length << endl;
    return length;
}