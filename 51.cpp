#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:

    
    Rectangle()
    {
        length = 1;
        width = 1;
    }

    
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    
    ~Rectangle()
    {
        cout << "Rectangle object destroyed." << endl;
    }

    
    double calculateArea()
    {
        return length * width;
    }

    
    double calculatePerimeter()
    {
        return 2 * (length + width);
    }

    
    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main()
{
    double l, w;

    cout << "Enter Length: ";
    cin >> l;

    cout << "Enter Width: ";
    cin >> w;

    Rectangle r(l, w);

    cout << "\nRectangle Properties:" << endl;
    r.display();

    return 0;
}
