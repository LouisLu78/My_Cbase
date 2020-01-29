# include <iostream>

# define PI 3.14159
using namespace std;

inline double circleArea(double radius)
{
    return PI*radius*radius;
}

int main()
{
    double radius;

    cout << "Please input the radius of circle:";
    cin >> radius;

    cout << "The area of the circle with radius " << radius
    << " is "<< circleArea(radius) << endl;

    return 0;
}
// This is the first C++ program I have ever written in my life.
