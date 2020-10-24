#include<iostream>
using namespace std; 

#ifndef RECTANGLE_H 
#define RECTANGLE_H 

class Rectangle
{
private: 
    float height; 
    float width; 
public:
    // Constructor
    Rectangle(float h, float w); 
    // Setters
    void setWidth(float width);
    void setHeight(float height);
    // Getters
    float getWidth(); 
    float getHeight();
    // Functions
    float area();
    float perimeter();
    void print(string); 
    void printShape(); 
}; 

#endif

// Constructor
Rectangle::Rectangle(float h, float w)
{
    setHeight(h); 
    setWidth(w);
}
// Setters
void Rectangle::setHeight(float h)
{
    height = h; 
}
void Rectangle::setWidth(float w)
{
    width = w; 
}
// Getters
float Rectangle::getHeight()
{
    return height; 
}
float Rectangle::getWidth()
{
    return width;
}
// Functions
float Rectangle::area()
{
    return getHeight() * getWidth();
}
float Rectangle::perimeter()
{
    return 2 * (getHeight() + getWidth()); 
}
void Rectangle::print(string c = "all")
{
    if (c == "h&w")
        cout << "Height = " << height << " | Width = " << width << endl; 
    else if (c == "area")
        cout << "Area = " << area() << endl;
    else if (c == "perimeter")
        cout << "Perimeter = " << perimeter() << endl;
    else
    {
        cout << "Height = " << height << " | Width = " << width << endl;
        cout << "Area = " << area() << endl;
        cout << "Perimeter = " << perimeter() << endl;
    }
}
void Rectangle::printShape()
{
    for (float i=0; i<height; i+=0.1)
    {
        for (float j=0; j<width; j+=0.1)
            cout << "* ";
        cout << endl;
    }
}