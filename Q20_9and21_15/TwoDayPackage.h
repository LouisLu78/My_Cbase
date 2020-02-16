#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <iostream>
#include <string>
#include "Package.h"

using namespace std;

class TwoDayPackage : public Package
{
private:
	double twoDayFee;

public:
	TwoDayPackage(const string&, const string&, const string&, const string&,
		double = 0.0, double = 0.0, double = 0.0);

	virtual double calculateCost() const;
	virtual void print() const;
};

#endif // !TWODAYPACKAGE_H

