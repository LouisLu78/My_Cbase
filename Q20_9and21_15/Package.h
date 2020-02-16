#ifndef PACKAGE_H
#define PACKAGE_H


#include <iostream>
#include <string>

using namespace std;

class Package
{
private:
	string sender;
	string receiver;
	string address;
	string postcode;
	double weight;
	double fee;

public:
	Package(const string &, const string &, const string &, const string &,
			double = 0.0, double = 0.0);
	void setWeight(double);
	double getWeight() const;
	void setFee(double);
	double getFee() const;
	virtual double calculateCost() const;
	virtual void print() const;
};

#endif // !PACKAGE_H
