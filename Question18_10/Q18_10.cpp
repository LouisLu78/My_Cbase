#include <iostream>

using namespace std;

class IntegerSet
{
private:
	
	int length;
	bool a[101];

public:

	IntegerSet()
	{
		int i;
		length = 101;
		for (i = 0; i < length; i++) {
			a[i] = false;
		}
	}

	IntegerSet(bool s[], int size)
	{
		int i;
		length = size;
		for (i = 0; i < length; i++) {
			a[i] = s[i];
		}
		for (i = length; i < 101; i++) {
			a[i] = false;
		}
	}

	void unionOfSets(IntegerSet m, IntegerSet n)
	{
		int i;
		
		for (i = 0; i < 101; i++) {
			if (m.a[i] == true || n.a[i] == true) {
				a[i] = true;
			}
			else {
				a[i] = false;
			}
		}
	}

	void intersectionOfSets(IntegerSet m, IntegerSet n)
	{
		int i;

		for (i = 0; i < 101; i++) {
			if (m.a[i] == true && n.a[i] == true) {
				a[i] = true;
			}
			else {
				a[i] = false;
			}
		}		
	}

	void insertElement(int k)
	{
		if(k >= 0 && k <= 100){
			a[k] = true;
		}
		else {
			cout << "The number is not in the range from 0 to 100." << endl;
		}
	}

	void deleteElement(int m)
	{
		if (m >= 0 && m <= 100) {
			a[m] = false;
		}
		else {
			cout << "The number is not in the range from 0 to 100." << endl;
		}
	}

	void printSet() const
	{
		int i, flag = 0;

		for (i = 0; i < length; i++) {
			if (a[i]) {
				flag = 1;
				cout << i << " ";
			}
			else{
				cout << "";
			}
		}
		if (flag == 0) {
			cout << "--";
		}
		cout << endl;
	}

	int isEqualTo(IntegerSet m, IntegerSet n)
	{
		int i, flag = 1;
		
		for (i = 0; i < m.length; i++) {
			if (m.a[i] != n.a[i]) {
				flag = 0;
				break;
			}
		}		
		return flag;
	}
};

int main()
{
	int i;
	bool data[6] = {0,1,0,0,1,1};
	bool test[3] = { 1,1,1 };
	bool s[101] = { false };

	IntegerSet iset1(s, 101);
	iset1.printSet();

	IntegerSet iset2;
	iset2.printSet();

	IntegerSet iset3(data, 6);	
	iset3.printSet();

	IntegerSet iset4(test, 3);
	iset4.printSet();

	iset2.unionOfSets(iset3, iset4);
	iset2.printSet();

	iset2.intersectionOfSets(iset3, iset4);
	iset2.printSet();

	return 0;
}//I have solved this question.
