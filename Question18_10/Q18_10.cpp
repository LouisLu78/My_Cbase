#include <iostream>


using namespace std;

class IntegerSet
{
private:
	
	int length;
	bool a[];

public:
	IntegerSet(bool set[], int size)
	{
		int i;
		length = size;
		for (i = 0; i < length; i++) {
			a[i] = set[i];
		}
	}

	void unionOfSets(IntegerSet aa, IntegerSet bb)
	{
		int i;
		if (aa.length < bb.length) {
			length = bb.length;

			for (i = 0; i < aa.length; i++) {
				if (aa.a[i] == true || bb.a[i] == true) {
					a[i] = true;
				}
				else {
					a[i] = false;
				}
			}
			for (i = aa.length; i < length; i++) {
				a[i] = bb.a[i];
			}
		}
		else {
			length = aa.length;

			for (i = 0; i < bb.length; i++) {
				if (aa.a[i] == true || bb.a[i] == true) {
					a[i] = true;
				}
				else {
					a[i] = false;
				}

				for (i = bb.length; i < length; i++) {
					a[i] = aa.a[i];
				}
			}
		}
	}

	void intersectionOfSets(IntegerSet aa, IntegerSet bb)
	{
		int i;

		if (aa.length < bb.length) {
			length = aa.length;
		}
		else {
			length = bb.length;
		}
		for (i = 0; i < length; i++) {
			if (aa.a[i] == true && bb.a[i] == true) {
				a[i] = true;
			}
			else {
				a[i] = false;
			}
		}		
	}

	void insertElement(int k)
	{
		a[k] = true;
	}

	void deleteElement(int m)
	{
		a[m] = false;
	}

	void printSet() const
	{

	}
};//to be finished tomorrow
