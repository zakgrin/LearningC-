#include <iostream> // not local
#include "Student.h" // local file
using namespace std; 

int main()
{
    Student Omar("Omar", 89);
    Student Ahmed("Agmed", 78); 
    Omar.print(); 
    Ahmed.print();

    return 0; 
}

