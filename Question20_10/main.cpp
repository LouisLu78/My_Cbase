#include <iostream>
#include <vector>
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

int main()
{
	Account a(1000.0);
	SavingsAccount sa(2000.0, 0.05);
	CheckingAccount ca(3000.0, 1.5);

	cout << "\nThe balance of account a is " << a.getBalance() << endl;

	double amount = 365.5;
	a.credit(amount);
	cout << "\nThe balance of account a is changed to " << a.getBalance() << endl;

	cout << "\nThe balance of account sa is " << sa.getBalance() << endl;
	sa.calculateInterest();
	cout << "\nThe balance of account sa is changed to " << sa.getBalance() << endl;
	sa.debit(amount);
	cout << "\nThe balance of account sa is changed to " << sa.getBalance() << endl;

	cout << "\nThe balance of account ca is " << ca.getBalance() << endl;
	ca.credit(amount);
	cout << "\nThe balance of account ca is changed to " << ca.getBalance() << endl;	

	if (ca.debit(5000.0)) {
		cout << "\nThe balance of account ca is changed to " << ca.getBalance() << endl;
	}
	else {
		cout << "\nThe account ca has no enough money!" << endl;
	}

	if (ca.debit(2500.7)) {
		cout << "\nThe balance of account ca is changed to " << ca.getBalance() << endl;
	}
	else {
		cout << "\nThe account ca has no enough money!\n\n" << endl;
	}

	vector <Account*> accounts(3);

	accounts[0] = new Account(1500);
	accounts[1] = new SavingsAccount(2500, 0.07);
	accounts[2] = new CheckingAccount(3500, 2.1);

	for (size_t i = 0; i < accounts.size(); i++) {
		accounts[i]->debit(amount);
		cout << "The balance of the account is " << accounts[i]->getBalance() << endl;
	}

	return 0;
}//assembled and finished.