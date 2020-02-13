#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include <iostream>
#include "Account.h"

using namespace std;
class CheckingAccount : public Account
{
private:
	double charge;

public:
	CheckingAccount(double, double);

	void credit(double);
	bool debit(double);
};

#endif // !CHECKINGACCOUNT_H

