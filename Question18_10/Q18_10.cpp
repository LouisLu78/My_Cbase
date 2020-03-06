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
	}//rechecked

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
	}//rechecked

	void unionOfSets(IntegerSet n)
	{
		int i;
		
		for (i = 0; i < 101; i++) {
			if (a[i] == true || n.a[i] == true) {
				a[i] = true;
			}
			else {
				a[i] = false;
			}
		}
	}//rechecked

	void intersectionOfSets(IntegerSet n)
	{
		int i;

		for (i = 0; i < 101; i++) {
			if (a[i] == true && n.a[i] == true) {
				a[i] = true;
			}
			else {
				a[i] = false;
			}
		}		
	}//rechecked

	void insertElement(int k)
	{
		if(k >= 0 && k <= 100){
			a[k] = true;
		}
		else {
			cout << "The number is not in the range from 0 to 100." << endl;
		}
	}//rechecked

	void deleteElement(int m)
	{
		if (m >= 0 && m <= 100) {
			a[m] = false;
		}
		else {
			cout << "The number is not in the range from 0 to 100." << endl;
		}
	}//rechecked

	void printSet() const
	{
		int i, flag = 0;

		for (i = 0; i < 101; i++) {
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
	}//it works properly.

	bool isEqualTo(IntegerSet m)
	{
				
		for (int i = 0; i < 101; i++) {
			if (a[i] != m.a[i]) {

				return false;				
			}
		}		
		return true;
	}
};//this function is revised.

int main()
{
	int i;

	bool s[101] = { false };
	bool data[6] = {0,1,0,0,1,1};
	bool test[3] = { 1,1,1 };	

	IntegerSet iset1(s, 101);
	iset1.printSet();

	IntegerSet iset2;
	iset2.printSet();

	cout << "The two objects are equal(1) or not(0) to each other? " << iset2.isEqualTo(iset1) << endl;

	IntegerSet iset3(data, 6);	
	iset3.printSet();

	IntegerSet iset4(test, 3);
	iset4.printSet();

	iset3.unionOfSets(iset4);
	iset3.printSet();

	IntegerSet iset5(data, 6);
	iset5.intersectionOfSets(iset4);
	iset5.printSet();

	for (i = 0; i < 101; i += 5) {
		iset2.insertElement(i);
	}
	iset2.printSet();

	return 0;
}//I have solved this question.
