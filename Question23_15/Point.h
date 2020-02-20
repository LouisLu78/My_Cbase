#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;

class Point
{
	friend ostream& operator<<(ostream&, const Point&);
	friend istream& operator>>(istream&, Point&);

private:
	int xCoordinate;
	int yCoordinate;

public:
	Point(int = 1 , int = 1);
};


#endif // !POINT_H


