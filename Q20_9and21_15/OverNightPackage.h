#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <iostream>
#include <string>
#include "Package.h"

using namespace std;

class OverNightPackage : public Package
{
private:
	double overNightFee;

public:
	OverNightPackage(const string&, const string&, const string&, const string&,
		double = 0.0, double = 0.0, double = 0.0);

	virtual double calculateCost() const;
	virtual void print() const;
};

#endif // !OVERNIGHTPACKAGE_H

