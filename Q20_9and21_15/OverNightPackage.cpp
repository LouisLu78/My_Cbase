#include <iostream>
#include <string>
#include "OverNightPackage.h"

using namespace std;

OverNightPackage::OverNightPackage(const string& senderName, const string& receiverName, const string& receiverAdd, const string& numberOfPost,
	double packageMass, double fees, double feeOverNight)
	:Package(senderName, receiverName, receiverAdd, numberOfPost, packageMass, fees)
{
	overNightFee = feeOverNight;
}

double OverNightPackage::calculateCost() const
{
	return overNightFee * getWeight() + Package::calculateCost();
}

void OverNightPackage::print() const
{
	cout << "\n The overnight package information is listed below:\n\n" << endl;
	Package::print();
}