#include<iostream>
using namespace std;

bool compareLists(int*, int*, int, int);

int main(){

    const int size1 = 5;
    int list1[size1] = {1,2,3,4,5};
    const int size2 = 5;
    int list2[size2] = {1,2,3,4,5};

    // not possible
    // if(array1 == array2)
    //   cout << "lists are equal" << endl;

    if (compareLists(list1, list2, size1, size2))
        cout << "The lists are the same" << endl;
    else
        cout << "The lists are not the same" << endl;

}

bool compareLists(int* list1, int* list2, int size1, int size2){

    if (size1 != size2)
        return false;

    for (int i=0; i<size1; i++){
        if (list1[i] != list2[i])
            return false;
    }
    return true;
}