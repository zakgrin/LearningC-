#include <iostream>
#include "Rectangle.h"
using namespace std; 

int main()
{
    Rectangle rect(1.1, 1.6); 
    // or Rectangle rect = Rectangle(1.32, 1.44);
    rect.print(""); 
    rect.print("area"); 
    cout << "Area = " << rect.area() << endl; 
    rect.print("perimeter"); 
    cout << "Perimeter = " << rect.perimeter() << endl; 
    rect.print("h&w");
    rect.printShape(); 

    return 0; 
}