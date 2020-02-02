# include <iostream>

using namespace std;

class Rectangle
{
private:

    double width;
    double length;

public:

    Rectangle(double rect_width = 2.0, double rect_length = 3.0)
    {
        setWidth(rect_width);
        setLength(rect_length);
    }

    void setWidth(double rect_width)
    {
        width = (rect_width < 0 || rect_width > 20.0) ? 1.0 : rect_width;
    }

    double getWidth()
    {
        return width;
    }

    void setLength(double rect_length)
    {
        length = (rect_length < 0 || rect_length > 20.0) ? 1.0 : rect_length;
    }

    double getLength()
    {
        return length;
    }

    double perimeter()
    {
        return (getLength() + getWidth()) * 2;
    }

    double area()
    {
        return getWidth() * getLength();
    }

    void print()
    {
        cout << "\nThe length of the rectangle is " << getLength() << ";" << endl;
        cout << "\nThe width of the rectangle is " << getWidth() << ";" << endl;
        cout << "\nThe perimeter of the rectangle is " << perimeter() << ";" << endl;
        cout << "\nThe area of the rectangle is " << area() << "." << endl;
    }

};

int main()
{
    Rectangle rect1;
    rect1.print();

    Rectangle rect2(5.2, 13.7);
    rect2.print();

    return 0;
}
