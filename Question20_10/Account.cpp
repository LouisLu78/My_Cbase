#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(double balanceOfaccount)
{
	if (balanceOfaccount >= 0) {
		balance = balanceOfaccount;
	}
	else {
		balance = 0.0;
		cout << "The balance of this account is less than zero!" << endl;
	}

}

void Account::credit(double amount)
{
	balance += amount;
}

void Account::debit(double amount)
{
	if (amount <= balance) {
		balance -= amount;
	}
	else {
		cout << "Debit amount exceeds account balance!" << endl;
	}

}

void Account::setBalance(double balanceOfaccount)
{
	balance = balanceOfaccount;
}

double Account::getBalance() const
{
	return balance;
}
