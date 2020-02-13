#include <iostream>
#include "CheckingAccount.h"

using namespace std;

CheckingAccount::CheckingAccount(double balanceOfaccount, double fee)
				:Account(balanceOfaccount)
{
	charge = fee;
}

void CheckingAccount::credit(double amount)
{
	setBalance(getBalance() + amount - charge);
}

bool CheckingAccount::debit(double amount)
{
	if (getBalance() >= (amount + charge)) {
		credit(amount * (-1));
		return true;
	}
	else {
		return false;
	}
}