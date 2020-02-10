#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class DoubleSubscriptedArray
{
	friend istream& operator>>(istream& input, DoubleSubscriptedArray& array);
	friend ostream& operator<<(ostream& output, DoubleSubscriptedArray& array);

private:
	int row;
	int column;
	int** ptr;

public:
	DoubleSubscriptedArray(int r = 3, int c = 5)
	{
		int i, j;
		row = r;
		column = c;
		ptr = new int*[row];

		for (i = 0; i < row; i++) {
			ptr[i] = new int[column];
		}

		for (i = 0; i < row; i++) {
			for (j = 0; j < column; j++) {
				ptr[i][j] = 0;
			}
		}
	}//finished

	DoubleSubscriptedArray(const DoubleSubscriptedArray &arrayToCopy)
	{
		int i, j;
		row = arrayToCopy.row;
		column = arrayToCopy.column;
		ptr = new int* [row];

		for (i = 0; i < row; i++) {
			ptr[i] = new int[column];
		}

		for (i = 0; i < row; i++) {
			for (j = 0; j < column; j++) {
				ptr[i][j] = arrayToCopy.ptr[i][j];
			}
		}
	}//finished

	int getRow() const
	{
		return row;
	}//finished

	int getColumn() const
	{
		return column;
	}//finished

	int &operator()(int subscriptRow, int subscriptColumn)
	{
		if (subscriptRow < 0 || subscriptRow >= row || subscriptColumn < 0 || subscriptColumn >= column) {
			cerr << "subscript is out of range!" << endl;
			exit(1);
		}
		return ptr[subscriptRow][subscriptColumn];
	}//finished

	const DoubleSubscriptedArray& operator=(const DoubleSubscriptedArray &right)
	{
		int i, j;

		if (&right != this) {
			if (row != right.row || column != right.column) {
				for (i = 0; i < row; i++) {
					delete[] ptr[i];
				}
				delete ptr;

				row = right.row;
				column = right.column;
				ptr = new int* [row];

				for (i = 0; i < row; i++) {
					ptr[i] = new int[column];
				}

				for (i = 0; i < row; i++) {
					for (j = 0; j < column; j++) {
						ptr[i][j] = right.ptr[i][j];
					}
				}
			}
		}
		return *this;
	}//finished

	bool operator==(const DoubleSubscriptedArray &right) const
	{
		int i, j;

		if (row != right.row || column != right.column) {
			return false;
		}
		for (i = 0; i < row; i++) {
			for (j = 0; j < column; j++) {
				if (ptr[i][j] != right.ptr[i][j]) {
					return false;
				}				
			}
		}
		return true;
	}//finished

	bool operator!=(const DoubleSubscriptedArray &right) const
	{
		return !(*this == right);
	}//finished

};//class finished

istream& operator>>(istream& input, DoubleSubscriptedArray& array)
{
	int i, j;
	for (i = 0; i < array.row; i++) {
		for (j = 0; j < array.column; j++) {
			input >> array.ptr[i][j];
		}
	}
	return input;
}

ostream& operator<<(ostream& output, DoubleSubscriptedArray& array)
{
	int i, j;
	for (i = 0; i < array.row; i++) {
		for (j = 0; j < array.column; j++) {
			output << setw(8) << array.ptr[i][j];
		}
		output << endl;
	}
	return output;
}

int main()
{
	int i, j;

	DoubleSubscriptedArray dsa1;
	cout << "The array of dsa1 is:\n" << dsa1 << endl;

	DoubleSubscriptedArray dsa2(2, 2);
	cout << "The array of dsa2 is:\n" << dsa2 << endl;

	cout << dsa2(0, 1) << endl;
	cin >> dsa2;
	cout << "After input,the array of dsa2 is:\n" << dsa2 << endl;

	if (dsa1 != dsa2) {
		cout << "The two arrays are not equal." << endl;
	}

	for (i = 0; i < dsa2.getRow(); i++) {
		for (j = 0; j < dsa2.getColumn(); j++) {
			dsa2(i,j) = i*5 + j*3;
		}
	}
	cout << "The array of dsa2 is:\n" << dsa2 << endl;

	DoubleSubscriptedArray dsa3(dsa2);
	cout << "The array of dsa3 is:\n" << dsa3 << endl;

	return 0;
}