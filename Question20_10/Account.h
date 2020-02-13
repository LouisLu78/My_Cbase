#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>

using namespace std;

class Account
{
private:
	double balance;

public:
	Account(double);

	void credit(double);
	void debit(double);
	void setBalance(double);
	double getBalance() const;
};

#endif // !ACCOUNT_H

