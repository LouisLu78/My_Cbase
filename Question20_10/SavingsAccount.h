#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "Account.h"

using namespace std;

class SavingsAccount : public Account
{
private:
	double interestRate;

public:
	SavingsAccount(double, double);
	double calculateInterest();
};

#endif // !SAVINGSACCOUNT_H

