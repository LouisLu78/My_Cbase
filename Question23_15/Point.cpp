#include <iostream>
#include <iomanip>
#include "Point.h"

using namespace std;

Point::Point(int x, int y)
{
	xCoordinate = x;
	yCoordinate = y;
}

ostream& operator<<(ostream& output, const Point& coordinate)
{
	output << "(" << coordinate.xCoordinate << ", " << coordinate.yCoordinate << ")";

	return output;
}

istream& operator>>(istream& input, Point& coordinate)
{
	input.ignore();
	input >> coordinate.xCoordinate;
	input.ignore(2);
	input >> coordinate.yCoordinate;
	input.ignore();

	return input;
}