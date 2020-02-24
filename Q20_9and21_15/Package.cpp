#include <iostream>
#include <string>
#include "Package.h"

using namespace std;

Package::Package(const string& senderName, const string& receiverName, const string& receiverAdd, const string& numberOfPost,
	double packageMass, double fees)
{
	sender = senderName;
	receiver = receiverName;
	address = receiverAdd;
	postcode = numberOfPost;
	setWeight(packageMass);
	setFee(fees);
}
void Package::setWeight(double packageMass)
{
	weight = packageMass;
}

double Package::getWeight() const
{
	return weight;
}

void Package::setFee(double fees)
{
	fee = fees;
}

double Package::getFee() const
{
	return fee;
}

double Package::calculateCost() const
{
	return getWeight() * getFee();
}

void Package::print() const
{
	cout << "\nThe sender of the package is " << sender << ";" << endl;
	cout << "\nThe receiver of the package is " << receiver << ";" << endl;
	cout << "\n with the address: " << address << "; postcode: " << postcode << ";" << endl;
	cout << "\n The postage is totally: " << calculateCost() << " RMB." << endl;
}