#include <iostream>
#include "SavingsAccount.h"

using namespace std;

SavingsAccount::SavingsAccount(double balanceOfaccount, double rateOfInterest)
	:Account(balanceOfaccount)
{
	interestRate = rateOfInterest;
}

double SavingsAccount::calculateInterest()
{
	double interest = getBalance() * interestRate;
	credit(interest);
	return interest;
}