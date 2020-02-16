#include <iostream>
#include <string>
#include "TwoDayPackage.h"

using namespace std;

TwoDayPackage::TwoDayPackage(const string& senderName, const string& receiverName, const string& receiverAdd, const string& numberOfPost,
	double packageMass, double fees, double feeForTwoDays)
	:Package(senderName, receiverName, receiverAdd, numberOfPost, packageMass, fees)
{
	twoDayFee = feeForTwoDays;
}

double TwoDayPackage::calculateCost() const
{
	return twoDayFee + Package::calculateCost();
}

void TwoDayPackage::print() const
{
	cout << "\n The two-day package information is listed below:\n\n" << endl;
	Package::print();
}