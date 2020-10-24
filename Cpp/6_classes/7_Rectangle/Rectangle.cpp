#include "Rectangle.h"

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
