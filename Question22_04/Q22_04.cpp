#include <iostream>
using namespace std;

template<class T>
int printArray(const T* const array, int count, int lowSubscript, int highSubscript)
{
	if (lowSubscript < 0 || lowSubscript >= count) {
		cout << "The low subscript is out of range!" << endl;
		return 0;
	}
	else if (highSubscript <= lowSubscript || highSubscript >= count){
		cout << "The high subscript is out of range!" << endl;
		return 0;
	}
	for (int i = lowSubscript; i <= highSubscript; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	return (highSubscript - lowSubscript + 1);
}

int main()
{
	const int aCount = 5;
	const int bCount = 8;
	const int cCount = 10;

	int a[aCount] = { 1, 3, 5, 7, 9 };
	double b[bCount] = { 1.1, 2.3, 0.5, 1.35, 3.14, 2.25, 0.37, 5.2 };
	char c[cCount] = "HelloGuys";

	cout << "\nThe integer array a is presented below:" << endl;	
	cout << "with " << printArray(a, 5, 0, 3) << " elements is shown." << endl;

	cout << "\nThe float array b is presented below:" << endl;
	cout << "with " << printArray(b, 8, 3, 7) << " elements is shown." << endl;;

	cout << "\nThe character array c is presented below:" << endl;
	cout << "with " << printArray(c, 10, 1, 9) << " elements is shown." << endl;

	cout << "\nThe character array c is presented below:" << endl;
	cout << "with " << printArray(c, 10, 1, 10) << " elements is shown." << endl;

	return 0;
}