# include<iostream>
using namespace std;

class SavingsAccount
{
private:
	static double annualInterestRate;
	double savingsBalance;

public:
	SavingsAccount(double balanceOfsaving)
	{
		savingsBalance = balanceOfsaving;
	}

	double calculateMonthlyInterest()
	{
		double monthlyInterest;

		monthlyInterest = annualInterestRate / 12 * savingsBalance;
		savingsBalance += monthlyInterest;

		return monthlyInterest;
	}

	static double modifyInterestRate(double interestRate)
	{
		annualInterestRate = interestRate;
		return annualInterestRate;
	}

	void print() const
	{
		cout << "The balance of your account is " << savingsBalance << "." << endl;
	}

};

double SavingsAccount::annualInterestRate = 0.03;

int main()
{
	SavingsAccount save1(2000.0);
	cout << "\nThe monthly interest of SAVE1 is " << save1.calculateMonthlyInterest() << "." << endl;
	save1.print();

	SavingsAccount save2(3000.0);
	cout << "\nThe monthly interest of SAVE2 is " << save2.calculateMonthlyInterest() << "." << endl;
	save2.print();

	SavingsAccount::modifyInterestRate(0.04);

	cout << "\nThe monthly interest of SAVE1 is " << save1.calculateMonthlyInterest() << "." << endl;
	save1.print();

	cout << "\nThe monthly interest of SAVE2 is " << save2.calculateMonthlyInterest() << "." << endl;
	save2.print();
	
	return 0;
}